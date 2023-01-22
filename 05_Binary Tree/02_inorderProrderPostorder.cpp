#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter the data " << endl;
    cin >> data;

    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data to the left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data to the right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    Inorder(root->left);
    cout << root->data;
    Inorder(root->right);
}

void PostOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data;
    PostOrder(root->left);
    PostOrder(root->right);
}

void PreOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    PreOrder(root->left);
    PreOrder(root->right);
    cout << root->data;
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << "Inorder Traversal" << endl;
    Inorder(root);
    cout << "Inorder Traversal" << endl;
    Inorder(root);
    cout << "Inorder Traversal" << endl;
    Inorder(root);
    return 0;
}