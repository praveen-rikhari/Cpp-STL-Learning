#include <bits/stdc++.h>
using namespace std;

void explain_pair()
{
    // creation - 1
    pair<int, string> p1(1, "Hello");

    // creation - 2
    auto p2 = make_pair(2, "World");

    // Access elements
    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;

    // Modify elements
    p1.first = 10;
    p1.second = "Hey";
    cout << "Modified Pair 1: " << p1.first << ", " << p1.second << endl;

    // Compare pairs
    pair<int, int> p3(1, 2);
    pair<int, int> p4(1, 3);
    if (p3 < p4)
    {
        cout << "p3 is less than p4" << endl;
    }

    // Nested Pair
    pair<int, pair<int, int>> nestedPair = {10, {45, 18}};
    cout << "Nested Pair: " << nestedPair.first << ", (" << nestedPair.second.first << ", " << nestedPair.second.second << ")" << endl;

    // Pair Array
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Pair Array : " << arr[1].second << endl;
}

int main()
{
    explain_pair();
    return 0;
}