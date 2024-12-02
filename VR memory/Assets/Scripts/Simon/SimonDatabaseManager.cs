using UnityEngine;
using SQLite4Unity3d;
using System.Collections.Generic;
using System.Linq;

public class SimonDatabaseManager : MonoBehaviour
{
    private SQLiteConnection dbConnection;

    void Start()
    {
        string dbPath = $"{Application.persistentDataPath}/SimonScores.db";
        dbConnection = new SQLiteConnection(dbPath, SQLiteOpenFlags.ReadWrite | SQLiteOpenFlags.Create);
        CreateTable();
    }

    private void CreateTable()
    {
        dbConnection.CreateTable<ScoreEntry>();
        Debug.Log("Score table created or already exists.");
    }

    public void SaveScore(string playerName, int score)
    {
        var existingEntry = dbConnection.Table<ScoreEntry>().FirstOrDefault(s => s.PlayerName == playerName);

        if (existingEntry != null)
        {
            // Update the existing player's score
            existingEntry.Score += score;
            dbConnection.Update(existingEntry);
            Debug.Log($"Updated score for {playerName}: {existingEntry.Score}");
        }
        else
        {
            // Insert a new player record
            var newEntry = new ScoreEntry
            {
                PlayerName = playerName,
                Score = score
            };
            dbConnection.Insert(newEntry);
            Debug.Log($"Inserted new player {playerName} with score {score}");
        }
    }

    public List<ScoreEntry> GetTopScores(int limit = 5)
    {
        return dbConnection.Table<ScoreEntry>()
                           .OrderByDescending(s => s.Score)
                           .Take(limit)
                           .ToList();
    }

    public int GetPlayerScore(string playerName)
    {
        var entry = dbConnection.Table<ScoreEntry>().FirstOrDefault(s => s.PlayerName == playerName);
        return entry?.Score ?? 0;
    }

    public void ResetScores()
    {
        dbConnection.DeleteAll<ScoreEntry>();
        Debug.Log("All scores have been reset.");
    }

    public class ScoreEntry
    {
        [PrimaryKey, AutoIncrement]
        public int ID { get; set; }
        public string PlayerName { get; set; }
        public int Score { get; set; }
    }
}
