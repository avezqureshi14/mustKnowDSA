#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int deletion(int *arr, int size, int pos)
{
    for (int i = 0; i < size; i++)
    {
        if (i == pos)
        {
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }

    size--;

    return size;
}

void print(int *arr, int n, int pos)
{
    n = deletion(arr, n, pos);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 9, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // array must have capacity for intake of new element
    print(arr, n, 2);
    return 0;
}