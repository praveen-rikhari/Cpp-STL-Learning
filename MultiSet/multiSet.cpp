#include <iostream>
#include <set>

using namespace std;

void explain_multiSet()
{
    // Create a multiset
    multiset<int> ms = {10, 20, 30, 20, 40, 50, 20};

    // Insert elements
    ms.insert(60);
    ms.insert(70);

    // Insert a duplicate element
    ms.insert(30); // Will be added as a duplicate

    // Count occurrences of an element
    cout << "Count of 20: " << ms.count(20) << endl;

    // Erase an element
    ms.erase(20); // Remove all elements with value 20

    // Find an element
    auto it = ms.find(30);
    if (it != ms.end())
    {
        cout << "Element found: " << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // Get the size of the multiset
    cout << "Size of multiset: " << ms.size() << endl;

    // Check if the multiset is empty
    if (ms.empty())
    {
        cout << "Multiset is empty" << endl;
    }
    else
    {
        cout << "Multiset is not empty" << endl;
    }

    // Iterate over the multiset
    cout << "Elements in the multiset: ";
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    // Clear the multiset
    ms.clear();
    cout << "Size of multiset after clear: " << ms.size() << endl; // Outputs 0
}

int main()
{
    explain_multiSet();
    return 0;
}
