using System.Collections.Generic;
using UnityEngine;

public class ShoppingList : MonoBehaviour
{
    public List<string> allItems = new List<string> { "Pepper", "Pear", "Steak", "Carrot", "Broccoli", "Pumpkin", "Fish", "Donut", "Cookie", "CoffeCup", "Cupcake", "Cake", "Burger", "Apple" };
    public List<string> activeList = new List<string>();
    public int itemCount = 3; // Default item count for Easy mode

    public void GenerateList()
    {
        activeList.Clear();
        List<string> tempItems = new List<string>(allItems);

        for (int i = 0; i < itemCount; i++)
        {
            int index = Random.Range(0, tempItems.Count);
            activeList.Add(tempItems[index]);
            tempItems.RemoveAt(index);
        }

        Debug.Log("Shopping List Generated: " + string.Join(", ", activeList));
    }
}
