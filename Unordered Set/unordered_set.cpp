#include <bits/stdc++.h>
using namespace std;

void explain_unorderedSet()
{
    // Create an unordered set and initialize with some values
    unordered_set<int> us = {10, 20, 30, 40, 50};

    // Insert elements
    us.insert(60);
    us.insert(70);

    // Attempt to insert a duplicate element
    us.insert(30); // Will not be added as duplicate

    // Erase an element
    us.erase(40);

    // Find an element
    auto it = us.find(20);
    if (it != us.end())
    {
        cout << "Element found: " << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // Get the size of the unordered set
    cout << "Size of unordered set: " << us.size() << endl; // Outputs 5

    // Check if the unordered set is empty
    if (us.empty())
    {
        cout << "Unordered set is empty" << endl;
    }
    else
    {
        cout << "Unordered set is not empty" << endl;
    }

    // Iterate over the unordered set
    cout << "Elements in the unordered set: ";
    for (const auto &elem : us)
    {
        cout << elem << " ";
    }
    cout << endl;

    // Clear the unordered set
    us.clear();
    cout << "Size of unordered set after clear: " << us.size() << endl; // Outputs 0
}

int main()
{
    explain_unorderedSet();
    return 0;
}
