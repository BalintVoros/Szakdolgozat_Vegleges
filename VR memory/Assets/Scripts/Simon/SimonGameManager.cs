using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Linq;
public class SimonGameManager : MonoBehaviour
{
    [Header("UI References")]
    public TMP_InputField playerNameInput; // Input field for player name
    public TextMeshProUGUI colorPatternDisplay; // Text to display the pattern or messages
    public GameObject startGameButton; // Start game button
    public GameObject easyButton; // Easy difficulty button
    public GameObject hardButton; // Hard difficulty button

    [Header("Game Settings")]
    public List<string> colorSequence = new List<string>(); // The generated color sequence
    public List<string> playerInput = new List<string>(); // The player's input
    private int sequenceLength; // Length of the pattern based on difficulty
    private string playerName; // The player's name
    private bool isPlayerTurn = false; // Tracks if it's the player's turn
    private int score = 0; // Player's score
    private SimonDatabaseManager databaseManager;

    void Start()
    {
        databaseManager = FindObjectOfType<SimonDatabaseManager>();
        if (databaseManager == null)
        {
            Debug.LogError("SimonDatabaseManager not found in the scene!");
        }
        if (!string.IsNullOrWhiteSpace(playerName))
    {
        // Fetch the player's existing score
        score = databaseManager.GetPlayerScore(playerName);
        Debug.Log($"Loaded score for {playerName}: {score}");
    }
    }

    private void SaveScore()
    {
        if (databaseManager != null && !string.IsNullOrWhiteSpace(playerName))
        {
            databaseManager.SaveScore(playerName, score);
            Debug.Log($"Saved score for {playerName}: {score}");
        }
        else
        {
            Debug.LogWarning("Score could not be saved. Missing player name or SimonDatabaseManager.");
        }
    }

    // Submits the player's name
    public void SubmitName()
    {
        if (!string.IsNullOrWhiteSpace(playerNameInput.text))
        {
            playerName = playerNameInput.text.Trim();
            colorPatternDisplay.text = $"Welcome, {playerName}! Choose a difficulty.";
            Debug.Log($"Player Name Set: {playerName}");
        }
        else
        {
            colorPatternDisplay.text = "Please enter a valid name.";
        }
    }

    // Sets easy difficulty
    public void SetEasyDifficulty()
    {
        sequenceLength = Random.Range(2,5);  // Easy mode pattern length
        colorPatternDisplay.text = "Easy mode selected. Press Start.";
        startGameButton.SetActive(true); // Enable start button
        Debug.Log("Easy difficulty selected.");
    }

    // Sets hard difficulty
    public void SetHardDifficulty()
    {
        sequenceLength = Random.Range(6,12);  // Hard mode pattern length
        colorPatternDisplay.text = "Hard mode selected. Press Start.";
        startGameButton.SetActive(true); // Enable start button
        Debug.Log("Hard difficulty selected.");
    }

    // Starts the game
   public void StartGame()
{
    score = 0; // Reset score

    colorPatternDisplay.text = "Memorize the pattern!";
    GeneratePattern(); // Generate the color pattern
    StartCoroutine(DisplayPattern()); // Display the pattern

    Debug.Log($"New game started. Score reset to {score}.");
}

    // Generates a random pattern based on difficulty
    private void GeneratePattern()
    {
        string[] colors = { "Red", "Blue", "Green", "Yellow" }; // Available colors
        colorSequence.Clear(); // Clear previous sequence

        for (int i = 0; i < sequenceLength; i++)
        {
            string randomColor = colors[Random.Range(0, colors.Length)];
            colorSequence.Add(randomColor);
        }

        Debug.Log($"Generated Pattern: {string.Join(", ", colorSequence)}");
    }

    // Displays the generated pattern one color at a time
private IEnumerator DisplayPattern()
{
    isPlayerTurn = false; // Disable player input during pattern display
    foreach (var color in colorSequence)
    {
        colorPatternDisplay.text = color; // Display the current color
        yield return new WaitForSeconds(2f); // Display color for 2 seconds

        // Add a blank flash to indicate the end of the current color
        colorPatternDisplay.text = ""; 
        yield return new WaitForSeconds(0.5f); // Brief pause before the next color
    }

    colorPatternDisplay.text = "Your turn!"; // Indicate player's turn
    isPlayerTurn = true; // Enable player's input
    playerInput.Clear(); // Clear previous inputs
}

    // Handles color button presses
    public void OnColorButtonPressed(string color)
    {
        if (!isPlayerTurn) return;

        playerInput.Add(color);
        Debug.Log($"Player selected: {color}");

        if (playerInput.Count == colorSequence.Count)
        {
            CheckPlayerInput(); // Check the player's full input
        }
    }

    // Checks if the player's input matches the sequence
private void CheckPlayerInput()
{
    for (int i = 0; i < colorSequence.Count; i++)
    {
        if (playerInput[i] != colorSequence[i])
        {
            colorPatternDisplay.text = "Incorrect! Try again.";
            Debug.Log("Player input does not match the pattern.");
            return;
        }
    }

    // Update the score based on the sequence length
    score += colorSequence.Count * 10;
    colorPatternDisplay.text = $"Correct! Your score: {score}. Play again or check high scores.";
    Debug.Log($"Player succeeded! Current score: {score}");

    // Save the score to the database after the game ends
    SaveScore();
}
}
