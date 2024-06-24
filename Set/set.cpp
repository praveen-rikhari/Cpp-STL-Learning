#include <bits/stdc++.h>
using namespace std;

void explain_sets(){
    // Create a set and initialize with some values
    set<int> s = {10, 20, 30, 40, 50};

    // Insert elements
    s.insert(60);
    s.insert(70);

    // Attempt to insert a duplicate element
    auto result = s.insert(30);
    if (!result.second) {
        cout << "Element 30 already exists in the set" << endl;
    }

    // Erase an element
    s.erase(40);

    // Find an element
    auto it = s.find(20);
    if (it != s.end()) {
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // Get the size of the set
    cout << "Size of set: " << s.size() << endl; // Outputs 5

    // Check if the set is empty
    if (s.empty()) {
        cout << "Set is empty" << endl;
    } else {
        cout << "Set is not empty" << endl;
    }

    // Iterate over the set
    cout << "Elements in the set: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    // Clear the set
    s.clear();
    cout << "Size of set after clear: " << s.size() << endl; // Outputs 0

}

int main() {
    explain_sets();
    return 0;
}
