#include<iostream>
using namespace std;

void sorted(int arr[], int n)
{
    int tmp;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
            }
        }
    }
}

void output(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int N;
    cin>>N;
    int arr[N] = {};
    //int arr1[5] = {1,2,3,4,5};
    for(int i = 0; i < N ; i++)
    {
        cin>>arr[i];
    }
    sorted(arr, N);
    output(arr, N);



    return 0;
}
