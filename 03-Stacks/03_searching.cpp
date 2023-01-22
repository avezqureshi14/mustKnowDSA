#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int search(stack<int> s, int key)
{
    int index = 1;
    while (!s.empty())
    {
        if (s.top() == key)
        {
            return index;
        }
        s.pop();
        index++;
    }
    return -1;
}

int main()
{
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(5);
    cout << "The element is present at the location " << search(s, 24);
    return 0;
}