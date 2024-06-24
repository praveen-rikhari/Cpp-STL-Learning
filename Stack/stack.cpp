#include <bits/stdc++.h>
using namespace std;

void explain_stack()
{
    // Create a stack
    stack<int> stk;

    // Push elements onto the stack
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    // Access the top element
    cout << "Top element: " << stk.top() << endl; // Outputs 30

    // Pop the top element
    stk.pop();

    // Access the top element again
    cout << "Top element after pop: " << stk.top() << endl; // Outputs 20

    // Get the size of the stack
    cout << "Size of stack: " << stk.size() << endl; // Outputs 2

    // Check if the stack is empty
    if (stk.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // Pop all elements
    while (!stk.empty())
    {
        cout << "Popping element: " << stk.top() << endl;
        stk.pop();
    }
}

int main()
{
    explain_stack();
    return 0;
}