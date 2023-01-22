#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
        
    }
    return -1;
}

int main()
{
    int arr[] = {5,8,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int position = linearSearch(arr,n,8);
    cout<<"Given element is present at the position "<<position;
    

    return 0;
}