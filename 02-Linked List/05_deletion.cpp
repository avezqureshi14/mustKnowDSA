#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void deleteAtStart(Node *&head)
{
    if (head == NULL)
    {
        return;
    }

    Node *temp = head;
    head = temp->next;
    ;
    delete (temp);
}

void deleteBetween(Node *&head, Node *&node)
{
    
    Node *temp1 = head;
    Node *temp2 = head;
    while (temp1->data != node->data && temp1 != NULL)
    {
            temp1 = temp1->next;
    }
    while (temp2->next->data != node->data && temp2 != NULL)
    {
            temp2 = temp2->next;
    }

    temp2->next = temp1->next;
    delete (temp1);
}

void deleteAtEnd(Node *&head)
{
    if (head == NULL)
    {
        return;
    }

    Node *last = head;
    while (last->next->next != NULL)
    {
        last = last->next;
    }
    Node *temp = last->next;
    last->next = NULL;
    delete (temp);
}

void print(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL";
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

    deleteAtStart(head);
    deleteBetween(head, third);
    deleteAtEnd(head);
    print(head);

    return 0;
}