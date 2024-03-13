#include<iostream>
using namespace std;
/*
Задача 3:
Да се напише рекурсивна функция, която по
дадено число изтрива първото срещане
на това число в даден масив.
*/

void removeNumber(int arr[], int sz, int idx, int number)
{
    if(arr[idx] == number)
    {
        for(int i = idx; i < sz; i++)
        {
            arr[i] = arr[i+1];
        }
        for(int i = 0; i < sz - 1; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else if(idx == sz)
    {
        return;
    }
    removeNumber(arr, sz, ++idx, number);
}
int main()
{
    int n, number;
    cin>>n>>number;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    removeNumber(arr, n, 0, number);
    return 0;
}
