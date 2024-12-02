using System.Data;
using Mono.Data.Sqlite;
using UnityEngine;
using System.IO;

public class SQLiteManager : MonoBehaviour
{
    private string dbPath;

    private void Start()
    {
        // Set the path for the database
        dbPath = Path.Combine(Application.persistentDataPath, "simon_game.db");
        InitializeDatabase();
    }

    private void InitializeDatabase()
    {
        // If the database doesn't exist, create it
        if (!File.Exists(dbPath))
        {
            Debug.Log("Creating SQLite database at: " + dbPath);
            CreateDatabase();
        }
        else
        {
            Debug.Log("Database found at: " + dbPath);
        }
    }

    private void CreateDatabase()
    {
        using (var connection = new SqliteConnection("URI=file:" + dbPath))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = @"
                CREATE TABLE IF NOT EXISTS Scores (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    playerName TEXT NOT NULL,
                    score INTEGER NOT NULL
                );";
                command.ExecuteNonQuery();
            }
        }
    }

public void InsertScore(string playerName, int score)
{
    Debug.Log($"Attempting to insert score: PlayerName = {playerName}, Score = {score}");

    using (var connection = new SqliteConnection("URI=file:" + dbPath))
    {
        connection.Open();

        using (var command = connection.CreateCommand())
        {
            command.CommandText = "INSERT INTO Scores (playerName, score) VALUES (@playerName, @score);";
            command.Parameters.AddWithValue("@playerName", playerName ?? "Unknown");
            command.Parameters.AddWithValue("@score", score);
            command.ExecuteNonQuery();
        }
    }
    Debug.Log($"Score successfully added: {playerName ?? "Unknown"} - {score}");
}



    public DataTable GetTopScores(int limit = 10)
    {
        DataTable table = new DataTable();

        using (var connection = new SqliteConnection("URI=file:" + dbPath))
        {
            connection.Open();

            using (var command = connection.CreateCommand())
            {
                command.CommandText = $"SELECT * FROM Scores ORDER BY score DESC LIMIT {limit};";
                using (var reader = command.ExecuteReader())
                {
                    table.Load(reader);
                }
            }
        }

        return table;
    }
}
