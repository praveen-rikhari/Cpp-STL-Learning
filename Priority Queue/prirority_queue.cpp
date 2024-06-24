#include <bits/stdc++.h>
using namespace std;

void explain_prirority_queue()
{
    // Create a max-heap priority queue
    priority_queue<int> maxHeap;

    // Push elements onto the max-heap
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);

    // Access the top element
    cout << "Top element (max-heap): " << maxHeap.top() << endl; // Outputs 20

    // Pop the top element
    maxHeap.pop();

    // Access the top element again
    cout << "Top element after pop (max-heap): " << maxHeap.top() << endl; // Outputs 10

    // Get the size of the priority queue
    cout << "Size of max-heap: " << maxHeap.size() << endl; // Outputs 2

    // Check if the priority queue is empty
    if (maxHeap.empty())
    {
        cout << "Max-heap is empty" << endl;
    }
    else
    {
        cout << "Max-heap is not empty" << endl; // Outputs this line
    }
}

int main()
{
    explain_prirority_queue();
    return 0;
}