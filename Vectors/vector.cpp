#include <bits/stdc++.h>
using namespace std;

void explain_vector()
{
    // Create vectors
    vector<int> vec1;
    vector<int> vec2(10);    // vector of size 10;
    vector<int> vec3(10, 5); // vector of size 10 with all initialized with 5
    vector<int> v = {1, 2, 3, 4, 5};

    // Access elements
    cout << "Element at index 0: " << v[0] << endl;
    cout << "Element at index 1: " << v.at(1) << endl;

    // Modify elements
    v[0] = 10;
    v.at(1) = 20;

    // Add elements
    vec1.push_back(6);
    vec1.push_back(7);

    // Remove elements
    vec1.pop_back();

    // vector iterator
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << endl;

    it = it + 2;
    cout << *(it) << endl;

    // printing the vector
    cout << "Printing using vector iterator : ";
    for (vector<int>::iterator it2 = v.begin(); it2 != v.end(); it2++)
    {
        cout << *(it2) << ", ";
    }

    cout << "\nPrinting using auto dataType : ";
    for (auto it2 = v.begin(); it2 != v.end(); it2++)
    {
        cout << *(it2) << ", ";
    }

    // Insert elements
    v.insert(v.begin(), 0);
    v.insert(v.begin() + 1, 2, 3);

    cout << "\nPrinting using forEach : ";
    for (auto it2 : v)
    {
        cout << it2 << ", ";
    }

    // Erase elements
    v.erase(v.begin());
    v.erase(v.begin(), v.begin() + 2);

    // Get size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Empty: " << v.empty() << endl;
    cout << "Capacity: " << v.capacity() << endl;
}

int main()
{
    explain_vector();
    return 0;
}
