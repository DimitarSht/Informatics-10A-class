#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    double average;
    cin>>n;
    if(n > 5 && n < 25)
    {
        int arr[n] = {};
        for(int i = 0; i < n ; i++)
        {
            cin >>arr[i];
        }
        for(int i = 0; i < n ; i++)
        {
            sum = sum + arr[i];
        }
        average = sum / n;
        cout<<average<<endl;
        for(int i = 0; i < n ; i++)
        {
            if(arr[i] > average)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
        return 0;
}
