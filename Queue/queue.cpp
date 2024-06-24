#include <bits/stdc++.h>
using namespace std;

void explain_queue()
{
    // Create a queue
    queue<int> q;

    // Push elements onto the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Access the front and back elements
    cout << "Front element: " << q.front() << endl; // Outputs 10
    cout << "Back element: " << q.back() << endl;   // Outputs 30

    // Pop the front element
    q.pop();

    // Access the front element again
    cout << "Front element after pop: " << q.front() << endl; // Outputs 20

    // Get the size of the queue
    cout << "Size of queue: " << q.size() << endl; // Outputs 2

    // Check if the queue is empty
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl; // Outputs this line
    }
}

int main()
{
    explain_queue();
    return 0;
}