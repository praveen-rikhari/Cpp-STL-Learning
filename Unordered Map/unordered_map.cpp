#include <bits/stdc++.h>
using namespace std;

void explain_unorderedMap()
{
    // Create an unordered map and initialize with some key-value pairs
    unordered_map<int, string> um = {{1, "one"}, {2, "two"}, {3, "three"}};

    // Insert elements
    um.insert({4, "four"});
    um[5] = "five"; // Using operator[]

    // Attempt to insert a duplicate key
    um.insert({3, "three_new"}); // Will not change the value of key 3

    // Erase an element
    um.erase(2); // Remove element with key 2

    // Find an element
    auto it = um.find(3);
    if (it != um.end())
    {
        cout << "Element found: " << it->first << " => " << it->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // Access elements by key
    cout << "Value at key 1: " << um[1] << endl;

    // Get the size of the unordered map
    cout << "Size of unordered map: " << um.size() << endl; // Outputs 3

    // Check if the unordered map is empty
    if (um.empty())
    {
        cout << "Unordered map is empty" << endl;
    }
    else
    {
        cout << "Unordered map is not empty" << endl;
    }

    // Iterate over the unordered map
    cout << "Elements in the unordered map: ";
    for (auto it : um)
    {
        cout << it.first << " => " << it.second << " ";
    }
    cout << endl;

    // Clear the unordered map
    um.clear();
    cout << "Size of unordered map after clear: " << um.size() << endl; // Outputs 0
}

int main()
{
    explain_unorderedMap();
    return 0;
}
