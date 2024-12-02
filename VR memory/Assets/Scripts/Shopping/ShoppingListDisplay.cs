using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class ShoppingListDisplay : MonoBehaviour
{
    public TextMeshProUGUI listText; // Reference to the TextMeshPro component
    private ShoppingList shoppingList;
    private GameStarter gameStarter;
    private bool isVisible = false; // Tracks if the list is currently visible
    private float displayTimer = 0f; // Timer for controlling the visibility of the list

    void Start()
    {
        shoppingList = FindObjectOfType<ShoppingList>();
        gameStarter = FindObjectOfType<GameStarter>();
        if (SceneManager.GetActiveScene().name != "3 Shopping Game Scene")
        {
            enabled = false;
            return;
        }

        if (shoppingList == null || gameStarter == null)
        {
            Debug.LogError("ShoppingList or GameStarter not found in the scene!");
            return;
        }

        // Show a waiting message initially
        listText.text = "Waiting to start...";
        listText.gameObject.SetActive(true);
    }

    void Update()
    {
        // If the list is visible and a timer is running
        if (isVisible && displayTimer > 0f)
        {
            displayTimer -= Time.deltaTime;
            if (displayTimer <= 0f)
            {
                HideList();
            }
        }
    }

    public void ShowListForDuration(float duration)
    {
        if (shoppingList != null && shoppingList.activeList.Count > 0)
        {
            listText.text = "Shopping List:\n" + string.Join("\n", shoppingList.activeList);
        }
        else
        {
            listText.text = "All items collected!";
        }

        listText.gameObject.SetActive(true);
        isVisible = true;
        displayTimer = duration;
    }

    public void ShowVictoryMessage(string victoryText)
    {
        listText.text = victoryText;
        listText.gameObject.SetActive(true);
        isVisible = false; // Do not auto-hide the victory message
    }

    public void HideList()
    {
        listText.gameObject.SetActive(false); // Hide the list
        isVisible = false;
    }
}
