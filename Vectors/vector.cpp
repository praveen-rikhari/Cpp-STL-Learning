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
}

int main()
{
    explain_vector();
    return 0;
}
