#include<iostream>
using namespace std;

void sum(int *arr, int length, int sum)
{
    if(length == 0)
    {
        sum = 0;
        return;
    }
    sum(arr, length - 1, sum + arr[length-1]);
    cout<<sum;
}

int sumArray(int *arr, int length)
{
    if(length == 0)
    {
        return 0;
    }
    return arr[length - 1] + sumArray(arr, length - 1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout<<sumArray(arr, 5);
    sum(arr, 5, 0);

    return 0;
}

