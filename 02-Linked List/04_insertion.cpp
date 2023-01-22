#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void print(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL";
}

void insertAtEnd(Node*head, int newData){
    Node*newNode = new Node();
    if (head == NULL)
    {
        newNode = head;
        newNode->data = newData;
    }
    Node*last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    newNode->data = newData;
}

void insertAtStart(Node*&head, int newData){ //by reference
    Node*newNode = new Node();
    if (head == NULL)
    {
        head = newNode;
        newNode->data = newData;
    }
    newNode->next = head;
    head = newNode;
    newNode->data = newData;
}

void insertAtBetween(Node*&prevNode, int newData){
    Node*newNode = new Node();
    if (prevNode == NULL)
    {
        prevNode = newNode;
        newNode->data = newData;
    }
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    newNode->data = newData;
    
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    insertAtStart(head,8);
    insertAtBetween(second,50);
    insertAtEnd(head,18);
    print(head);
    

    return 0;
}