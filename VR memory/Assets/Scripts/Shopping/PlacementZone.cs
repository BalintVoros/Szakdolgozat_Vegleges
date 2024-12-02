using UnityEngine;

public class PlacementZone : MonoBehaviour
{
    private ShoppingList shoppingList;
    private ShoppingListDisplay shoppingListDisplay;
    private bool gameWon = false;
    public int score = 0; // Player's score

    void Start()
    {
        shoppingList = FindObjectOfType<ShoppingList>();
        shoppingListDisplay = FindObjectOfType<ShoppingListDisplay>();

        if (shoppingList == null || shoppingListDisplay == null)
        {
            Debug.LogError("ShoppingList or ShoppingListDisplay not found in the scene!");
        }

        // Load score from PlayerPrefs
        if (PlayerPrefs.HasKey("Score"))
        {
            score = PlayerPrefs.GetInt("Score");
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (gameWon) return; // Stop interactions after victory

        if (shoppingList.activeList.Contains(other.gameObject.name))
        {
            // Correct item: Increase score
            shoppingList.activeList.Remove(other.gameObject.name);
            Destroy(other.gameObject);
            score += 10; // Add points for correct placement

            shoppingListDisplay.ShowListForDuration(2f);
            Debug.Log($"Correct item placed. Score: {score}");

            // Check if all items are collected
            if (shoppingList.activeList.Count == 0)
            {
                TriggerVictory();
            }
        }
        else
        {
            // Incorrect item: Deduct score
            score -= 5; // Penalize for incorrect placement
            shoppingListDisplay.ShowListForDuration(2f);
            Debug.Log($"Incorrect item placed. Score: {score}");
        }
    }

private void TriggerVictory()
{
    gameWon = true;

    Debug.Log($"You win! Final Score: {score}");

    // Save the score
    var gameUIManager = FindObjectOfType<GameUIManager>();
    if (gameUIManager != null)
    {
        gameUIManager.SaveScore(); // Save the score to the database
    }

    // Display the final score on the victory screen
    shoppingListDisplay.ShowVictoryMessage($"Congratulations! Final Score: {score}");

    // Reset the score only after saving and displaying it
    ResetScore();
}

public void ResetScore()
{
    score = 0; // Reset the score for the next game
    Debug.Log("Score reset for the next game.");
}


}
