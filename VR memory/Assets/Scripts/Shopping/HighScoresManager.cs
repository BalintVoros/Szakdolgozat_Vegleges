using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HighScoresManager : MonoBehaviour
{
    public GameObject highScoresPanel; // Panel to display high scores
    public TextMeshProUGUI highScoresText; // Text component to display scores
    private DatabaseManager databaseManager;

    void Start()
    {
        databaseManager = FindObjectOfType<DatabaseManager>();
        if (databaseManager == null)
        {
            Debug.LogError("DatabaseManager not found in the scene!");
        }

        if (highScoresPanel != null)
        {
            highScoresPanel.SetActive(false); // Hide the high scores panel initially
        }
    }

    public void ShowHighScores()
    {
        if (databaseManager == null) return;

        List<ScoreEntry> topScores = databaseManager.GetTopScores(5);

        highScoresText.text = "High Scores:\n";
        foreach (var scoreEntry in topScores)
        {
            highScoresText.text += $"{scoreEntry.PlayerName}: {scoreEntry.Score}\n";
        }

        if (highScoresPanel != null)
        {
            highScoresPanel.SetActive(true);
        }
    }

public void HideHighScores()
{
    if (highScoresPanel != null)
    {
        highScoresPanel.SetActive(false);
        Debug.Log("High Scores Panel is now hidden.");
    }
}

}
