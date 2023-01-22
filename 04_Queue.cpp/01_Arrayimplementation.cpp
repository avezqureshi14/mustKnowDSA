#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int *arr;
    int front = -1;
    int back = -1;
    int size;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    // insert at end in the array
    void push(int data)
    {
        if(back != size - 1)
        {
            back++;
            arr[back] = data;
        }
        else{
            cout<<"Queue Overflow"<<endl;
        }
    }

    void pop()
    {
        if (front == back)
        {
            cout<<"Queue is Empty";
        }
        else{
            for (int i = 0; i < back-1; i++)
            {
                arr[i] = arr[i+1];
            }
            back--;
        }
    }

    int peek(){
        return arr[front+1];        
    }

    bool isEmpty()
    {
        if (back == front)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if (back = size - 1)
        {
            return true;
        }
        return false;
    }

    void display(){
         for (int i = 0; i < size; i++)
         {
            cout<<arr[i]<<" ";
         }
    }
};
int main()
{
    Queue q(5);
    q.push(5);
    q.push(6);
    q.push(7);
    q.display(); 
    cout<<q.peek();
    return 0;
}