using UnityEngine;
using System.Collections.Generic;

public class GameStarter : MonoBehaviour
{
    private bool gameStarted = false; // Tracks if the game has started
    private int itemCount; // Number of items, set by difficulty
    private ShoppingList shoppingList; // Reference to the shopping list
    private ShoppingListDisplay shoppingListDisplay; // Reference to update the display

    void Start()
    {
        shoppingList = FindObjectOfType<ShoppingList>();
        shoppingListDisplay = FindObjectOfType<ShoppingListDisplay>();

        if (shoppingList == null || shoppingListDisplay == null)
        {
            Debug.LogError("ShoppingList or ShoppingListDisplay not found in the scene!");
        }

        Debug.Log("Game Ready. Select a difficulty and start the game!");
    }

    public void SetEasyDifficulty()
    {
        itemCount = Random.Range(1, 5); // Fewer items for Easy mode
        Debug.Log("Easy mode selected!");
    }

    public void SetHardDifficulty()
    {
        itemCount = Random.Range(6,10); // More items for Hard mode
        Debug.Log("Hard mode selected!");
    }

    public void StartGame()
    {
        if (itemCount == 0)
        {
            Debug.LogWarning("Select a difficulty first!");
            return;
        }

        gameStarted = true;

        // Generate the shopping list
        if (shoppingList != null)
        {
            shoppingList.itemCount = itemCount;
            shoppingList.GenerateList();

            // Show the list for 5 seconds
            if (shoppingListDisplay != null)
            {
                shoppingListDisplay.ShowListForDuration(5f);
            }
        }

        Debug.Log("Game Started! Items to collect: " + itemCount);
    }

    public bool IsGameStarted()
    {
        return gameStarted;
    }
}
