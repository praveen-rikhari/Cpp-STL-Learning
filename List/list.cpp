#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create lists
    list<int> lst1;
    list<int> lst2(10);
    list<int> lst3(10, 5);
    list<int> lst4 = {1, 2, 3, 4, 5};
    
    // Access elements using iterators
    list<int>::iterator it = lst4.begin();
    cout << "Element at beginning: " << *it << endl;
    it++;
    cout << "Element at next position: " << *it << endl;
    
    // Modify elements
    it = lst4.begin();
    *it = 10;
    it++;
    *it = 20;
    
    // Add elements
    lst1.push_front(6);
    lst1.push_front(7);
    lst1.push_back(8);
    lst1.push_back(9);
    
    // Remove elements
    lst1.pop_front();
    lst1.pop_back();
    
    // Insert elements
    lst1.insert(lst1.begin(), 0);
    it = lst1.begin();
    lst1.insert(it, 2, 3);
    
    // Erase elements
    lst1.erase(lst1.begin());
    auto it1 = lst1.begin();
    auto it2 = it1;
    lst1.erase(it1, it2);
    
    // Get size and check if empty
    cout << "Size: " << lst4.size() << endl;
    cout << "Empty: " << lst4.empty() << endl;
    
    // Iterate over the list
    for (list<int>::iterator it = lst4.begin(); it != lst4.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    for (int val : lst4) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}