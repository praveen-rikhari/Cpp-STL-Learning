#include <bits/stdc++.h>
using namespace std;

void explain_multiMap()
{
    // Create a multimap and initialize with some key-value pairs
    multimap<int, string> mm = {{1, "one"}, {2, "two"}, {3, "three"}, {2, "two_again"}};

    // Insert elements
    mm.insert({4, "four"});
    mm.insert({2, "two_more"});

    // Erase elements with a specific key
    mm.erase(3);

    // Find an element
    auto it = mm.find(2);
    if (it != mm.end())
    {
        cout << "First element with key 2: " << it->first << " => " << it->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // Count the number of elements with a specific key
    cout << "Number of elements with key 2: " << mm.count(2) << endl;

    // Get the size of the multimap
    cout << "Size of multimap: " << mm.size() << endl;

    // Check if the multimap is empty
    if (mm.empty())
    {
        cout << "Multimap is empty" << endl;
    }
    else
    {
        cout << "Multimap is not empty" << endl;
    }

    // Iterate over the multimap
    cout << "Elements in the multimap: ";
    for (auto it : mm)
    {
        cout << it.first << " => " << it.second << " ";
    }
    cout << endl;

    // Clear the multimap
    mm.clear();
    cout << "Size of multimap after clear: " << mm.size() << endl;
}

int main()
{
    explain_multiMap();
    return 0;
}
