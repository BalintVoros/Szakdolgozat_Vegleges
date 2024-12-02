using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class HighScoresPanelManager : MonoBehaviour
{
    public GameObject highScoresPanel;
    public TextMeshProUGUI highScoresText;
    private SimonDatabaseManager databaseManager;

    void Start()
    {
        databaseManager = FindObjectOfType<SimonDatabaseManager>();
        if (databaseManager == null)
        {
            Debug.LogError("SimonDatabaseManager not found!");
        }

        highScoresPanel.SetActive(false);
    }

    public void ShowHighScores()
    {
        if (databaseManager == null) return;

        List<SimonDatabaseManager.ScoreEntry> topScores = databaseManager.GetTopScores(5);
        highScoresText.text = "High Scores:\n";
        foreach (var score in topScores)
        {
            highScoresText.text += $"{score.PlayerName}: {score.Score}\n";
        }

        highScoresPanel.SetActive(true);
    }

    public void HideHighScores()
    {
        highScoresPanel.SetActive(false);
    }
     public void ResetScores()
    {
        if (databaseManager != null)
        {
            databaseManager.ResetScores();
            Debug.Log("All scores have been reset!");
        }
        else
        {
            Debug.LogError("Cannot reset scores. DatabaseManager is missing.");
        }
    }
}
