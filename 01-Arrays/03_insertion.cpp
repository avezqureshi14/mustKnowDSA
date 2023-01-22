#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[], int size, int pos, int key)
{

    for (int i = 0; i <= pos; i++)
    {
        if (i == pos)
        {
            arr[i + 1] = arr[i];
        }
    }
    arr[pos] = key;
    size++;
}


void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 4;
    int arr[n] = {1, 9, 5, 7};
    // array must have capacity for intake of new element
    insertion(arr, n, 4, 10);
    print(arr, n);
    return 0;
}