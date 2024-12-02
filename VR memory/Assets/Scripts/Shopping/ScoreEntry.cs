public class ScoreEntry
{
    public string PlayerName { get; private set; }
    public int Score { get; private set; }

    public ScoreEntry(string playerName, int score)
    {
        PlayerName = playerName;
        Score = score;
    }
}
