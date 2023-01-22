#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class Queue
{
public:
    Node *front = NULL;
    Node *back = NULL;

    void push(int newdata)
    {
        Node *newNode = new Node();
        newNode->data = newdata;
        if (back == NULL)
        {
            back = newNode;
            front = back;
        }
        else
        {
            back->next = newNode;
            newNode->next = NULL;
            back = newNode;
        }
    }

    void pop()
    {
        Node *temp = front;
        front = temp->next;
        delete (temp);
    }

    bool isEmpty()
    {
        if (front == NULL)
        {
        return true;
        }
        return false;
    }

    int peek()
    {
        if (!isEmpty())
        {
            return front->data;
        }

        return -1;
    }

    void display()
    {
        Node *temp;
        if (temp == NULL)
        {
            exit(1);
        }
        temp = front;
        while (front != NULL)
        {
            cout << front->data << " ";
            front = front->next;
        }
    }
};
int main()
{
    Queue q;
    q.push(7);
    q.push(8);
    q.push(9);
    q.pop();
    
    cout<<q.peek();

    return 0;
}