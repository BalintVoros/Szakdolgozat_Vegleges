using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class GameUIManager : MonoBehaviour
{
    public TMP_InputField playerNameInput; // Reference to the Input Field for player name
    public TextMeshProUGUI scoreText; // Reference to the Score Display UI
    public GameObject startGameButton; // Reference to Start Game Button
    private string playerName = ""; // Store the player's name
    private PlacementZone placementZone;
    private DatabaseManager databaseManager; // Reference to the DatabaseManager

void Start()
{
    placementZone = FindObjectOfType<PlacementZone>();
    databaseManager = FindObjectOfType<DatabaseManager>();

    if (placementZone == null)
    {
        Debug.LogError("PlacementZone not found in the scene!");
    }

    if (databaseManager == null)
    {
        Debug.LogError("DatabaseManager not found in the scene!");
    }
    else
    {
        Debug.Log("DatabaseManager found and assigned.");
    }

    // Load previous player name
    if (PlayerPrefs.HasKey("PlayerName"))
    {
        playerName = PlayerPrefs.GetString("PlayerName");
        if (playerNameInput != null)
        {
            playerNameInput.text = playerName; // Pre-fill the input field
        }
    }

    // Disable Start Game Button initially
    if (startGameButton != null)
    {
        startGameButton.SetActive(false);
    }
}

  public void SubmitPlayerName()
{
    if (playerNameInput != null && !string.IsNullOrWhiteSpace(playerNameInput.text))
    {
        playerName = playerNameInput.text;
        Debug.Log($"Player Name Set: {playerName}");

        // Reset score for the new player
        var placementZone = FindObjectOfType<PlacementZone>();
        if (placementZone != null)
        {
            placementZone.ResetScore();
        }

        // Enable the Start Game Button
        if (startGameButton != null)
        {
            startGameButton.SetActive(true);
        }
    }
    else
    {
        Debug.LogWarning("Player name input is empty. Cannot start the game.");
    }
}

public void StartGame()
{
    if (!string.IsNullOrWhiteSpace(playerName))
    {
        Debug.Log($"Starting the game for player: {playerName}");

        // Save the player name for persistence
        PlayerPrefs.SetString("PlayerName", playerName);
        PlayerPrefs.Save();

        var placementZone = FindObjectOfType<PlacementZone>();
        if (placementZone != null)
        {
            // Load the player's current total score if they exist
            if (databaseManager != null)
            {
                int totalScore = databaseManager.GetPlayerScore(playerName);
                placementZone.score = totalScore;
                Debug.Log($"Loaded total score for {playerName}: {totalScore}");
            }

            UpdateScoreDisplay(); // Update the UI with the loaded score
        }
    }
    else
    {
        Debug.LogWarning("Cannot start the game without a player name.");
    }
}

public void SaveScore()
{
    var placementZone = FindObjectOfType<PlacementZone>();
    if (!string.IsNullOrWhiteSpace(playerName) && databaseManager != null && placementZone != null)
    {
        Debug.Log($"Saving score for {playerName}: {placementZone.score}");
        databaseManager.SaveScore(playerName, placementZone.score); // Save the current score
    }
    else
    {
        Debug.LogWarning("Cannot save score. Missing player name, database reference, or placement zone.");
    }
}


public void RestartGame()
{
    var placementZone = FindObjectOfType<PlacementZone>();
    if (placementZone != null)
    {
        placementZone.ResetScore(); // Reset the score
    }

    PlayerPrefs.SetInt("Score", 0); // Reset stored score
    PlayerPrefs.Save();

    SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex); // Reload the scene
}

    public void UpdateScoreDisplay()
{
    var placementZone = FindObjectOfType<PlacementZone>();
    if (placementZone != null && scoreText != null)
    {
        scoreText.text = $"Score: {placementZone.score}";
    }
}

}
