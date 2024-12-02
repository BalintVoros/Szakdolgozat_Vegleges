using System.Data;
using Mono.Data.Sqlite;
using UnityEngine;
using System.Collections.Generic;

public class DatabaseManager : MonoBehaviour
{
    private string connectionString;

    void Start()
    {
        connectionString = "URI=file:" + Application.persistentDataPath + "/PlayerScores.db";
        CreateTable();
    }

    private void CreateTable()
    {
        using (var connection = new SqliteConnection(connectionString))
        {
            connection.Open();
            using (var command = connection.CreateCommand())
            {
                command.CommandText = @"
                    CREATE TABLE IF NOT EXISTS Scores (
                        ID INTEGER PRIMARY KEY AUTOINCREMENT,
                        PlayerName TEXT NOT NULL,
                        Score INTEGER NOT NULL
                    );";
                command.ExecuteNonQuery();
            }
        }
    }
public int GetPlayerScore(string playerName)
{
    int score = 0; // Default score if no record exists

    using (var connection = new SqliteConnection(connectionString))
    {
        connection.Open();
        using (var command = connection.CreateCommand())
        {
            command.CommandText = "SELECT Score FROM Scores WHERE PlayerName = @PlayerName LIMIT 1;";
            command.Parameters.Add(new SqliteParameter("@PlayerName", playerName));
            using (var reader = command.ExecuteReader())
            {
                if (reader.Read())
                {
                    score = int.Parse(reader["Score"].ToString());
                }
            }
        }
    }

    Debug.Log($"Fetched total score for {playerName}: {score}");
    return score;
}

public void SaveScore(string playerName, int score)
{
    using (var connection = new SqliteConnection(connectionString))
    {
        connection.Open();
        using (var command = connection.CreateCommand())
        {
            // Check if the player already exists
            command.CommandText = "SELECT COUNT(*) FROM Scores WHERE PlayerName = @PlayerName;";
            command.Parameters.Add(new SqliteParameter("@PlayerName", playerName));

            int playerExists = 0;
            using (var reader = command.ExecuteReader())
            {
                if (reader.Read())
                {
                    playerExists = int.Parse(reader[0].ToString());
                }
            }

            if (playerExists > 0)
            {
                // Update the player's existing score
                command.CommandText = "UPDATE Scores SET Score = Score + @Score WHERE PlayerName = @PlayerName;";
                Debug.Log($"Updating score for {playerName} by adding {score}.");
            }
            else
            {
                // Insert a new player if they don't exist
                command.CommandText = "INSERT INTO Scores (PlayerName, Score) VALUES (@PlayerName, @Score);";
                Debug.Log($"Adding new player {playerName} with score {score}.");
            }

            command.Parameters.Clear();
            command.Parameters.Add(new SqliteParameter("@PlayerName", playerName));
            command.Parameters.Add(new SqliteParameter("@Score", score));
            command.ExecuteNonQuery();
        }
    }
}

    public void ResetScores()
{
    using (var connection = new SqliteConnection(connectionString))
    {
        connection.Open();
        using (var command = connection.CreateCommand())
        {
            command.CommandText = "DELETE FROM Scores;";
            command.ExecuteNonQuery();

            Debug.Log("All scores have been reset.");
        }
    }
}


    public List<ScoreEntry> GetTopScores(int limit = 5)
    {
        List<ScoreEntry> scores = new List<ScoreEntry>();
        using (var connection = new SqliteConnection(connectionString))
        {
            connection.Open();
            using (var command = connection.CreateCommand())
            {
                command.CommandText = $"SELECT PlayerName, Score FROM Scores ORDER BY Score DESC LIMIT {limit};";
                using (IDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        scores.Add(new ScoreEntry(
                            reader["PlayerName"].ToString(),
                            int.Parse(reader["Score"].ToString())
                        ));
                    }
                }
            }
        }
        return scores;
    }
}
