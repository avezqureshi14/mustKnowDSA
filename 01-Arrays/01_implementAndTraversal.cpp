#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout<<"Array Implementation and Traversal"<<endl;
    int arr[] = {5,4,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);

    return 0;
}