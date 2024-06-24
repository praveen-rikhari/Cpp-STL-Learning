#include <bits/stdc++.h>
using namespace std;

void explain_dequeue()
{
    // Create deques
    deque<int> dq = {1, 2, 3, 4, 5};

    // Access elements
    cout << "Element at index 0: " << dq[0] << endl;
    cout << "Element at index 1: " << dq.at(1) << endl;

    // Add elements
    dq.push_front(6);
    dq.push_front(7);
    dq.push_back(8);
    dq.push_back(9);

    // Remove elements
    dq.pop_front();
    dq.pop_back();

    // printing deque
    cout << "Dequeue is : ";
    for (auto it = dq.begin(); it != dq.end(); it++){
        cout << *it << ", ";
    }
}

int main()
{
    explain_dequeue();
    return 0;
}