#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> input, output;

public:
    void enqueue(int data)
    {
        input.push(data);
    }

    int dequeue()
    {
        int x;
        if (input.empty() && output.empty())
        {
            cout << "Q is Empty";
            exit(0);
        }
        if (output.empty())
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        x = output.top();
        output.pop();
        return x;
    }

    bool isEmpty()
    {
        if (input.empty() && output.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Queue q;
    q.enqueue(4);
    q.enqueue(8);
    q.enqueue(7);
    cout << q.dequeue();
    cout << q.dequeue();
    cout << q.dequeue();
    return 0;
}