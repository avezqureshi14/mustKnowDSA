#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack
{
public:
    Node *top;
    Stack()
    {
        top = NULL;
    }
    void push(int newData)
    {
        Node *newNode = new Node(newData);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (top == NULL)
        {
            return;
        }
        Node *temp = top;
        top = temp->next;
        delete (temp);
    }

    int peek()
    {
        if (top == NULL)
        {
            return -1;
        }
        return top->data;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void display()
    {
        Node *temp;
        if (top == NULL)
        {
            exit(1);
        }
        else
        {
            temp = top;
            while (temp != NULL)
            {
                cout << temp->data << "-> ";
                temp = temp->next;
            }
            cout << "NULL";
        }
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(8);
    s.push(7);
    s.pop();
    s.display();
    return 0;
}