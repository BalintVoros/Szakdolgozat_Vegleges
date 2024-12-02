using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreDisplayManager : MonoBehaviour
{
    public TextMeshProUGUI scoreDisplayText; // Reference to the UI Text to display scores
    private DatabaseManager databaseManager;

    void Start()
    {
        databaseManager = FindObjectOfType<DatabaseManager>();
        if (databaseManager == null)
        {
            Debug.LogError("DatabaseManager not found in the scene!");
            return;
        }

        DisplayScores();
    }

    private void DisplayScores()
    {
        List<ScoreEntry> scores = databaseManager.GetTopScores(5); // Fetch top scores
        scoreDisplayText.text = "Top Scores:\n";

        foreach (var scoreEntry in scores)
        {
            scoreDisplayText.text += $"{scoreEntry.PlayerName}: {scoreEntry.Score}\n";
        }
    }
}
