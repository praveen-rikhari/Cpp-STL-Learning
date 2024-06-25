#include <bits/stdc++.h>
using namespace std;

void explain_map()
{
    // Create a map and initialize with some key-value pairs
    map<int, string> m = {{1, "one"}, {2, "two"}, {3, "three"}};

    // Insert elements
    m.insert({4, "four"});
    m[5] = "five"; // Using operator[]

    // Attempt to insert a duplicate key
    m.insert({3, "three_new"}); // Will not change the value of key 3

    // Erase an element
    m.erase(2); // Remove element with key 2

    // Find an element
    auto it = m.find(3);
    if (it != m.end())
    {
        cout << "Element found: " << it->first << " => " << it->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // Access elements by key
    cout << "Value at key 1: " << m[1] << endl;

    // Get the size of the map
    cout << "Size of map: " << m.size() << endl; // Outputs 3

    // Check if the map is empty
    if (m.empty())
    {
        cout << "Map is empty" << endl;
    }
    else
    {
        cout << "Map is not empty" << endl;
    }

    // Iterate over the map
    cout << "Elements in the map: ";
    for (auto it : m)
    {
        cout << it.first << " => " << it.second << " ";
    }
    cout << endl;

    // Clear the map
    m.clear();
    cout << "Size of map after clear: " << m.size() << endl; // Outputs 0
}

int main()
{
    explain_map();
    return 0;
}
