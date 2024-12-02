using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChangeManager : MonoBehaviour
{
    // Method to load the Start Scene
    public void LoadStartScene()
    {
        SceneManager.LoadScene("1 Start Scene");
    }
}
