#include<iostream>
using namespace std;
int sz, MinNumber = 1024;
int arr[1024];
int minElement(int idx)
{
    if(idx == sz)
    {
        return MinNumber;
    }
    if(arr[idx] < MinNumber)
    {
        MinNumber = arr[idx];
    }
    return minElement(++idx);
}

int main()
{
    cin>>sz;
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
    cout<<minElement(0);
    return 0;
}
