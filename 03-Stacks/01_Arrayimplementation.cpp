#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int size;
    int top;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }

    bool isEmpty(){
        if (top < 0)
        {
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if (size == top)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};


int main()
{
    Stack s(5);
    s.push(2);
    s.push(4);
    s.push(5);
    cout<<s.peek();
    s.isEmpty();
    while (!s.isEmpty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }
    
    
    return 0;
}