#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0, product = 1;
    cin>>n;
//    if(n > 0 && n < 20)
    int arr[n] = {};
    for(int i = 0; i < n ; i++)
    {
        cin >>arr[i];
    }
    for(int i = 0; i < n ; i++)
    {
        if(arr[i] >= 0)
        {
            sum = sum + arr[i];
        }
        else
        {
            product = product * arr[i];
        }
    }
    cout<<sum<<" "<<product;
    return 0;
}
