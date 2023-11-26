#include<iostream>
using namespace std;
int main()
{
    int sum, sum_cifri = 0;
    cin>>sum;

    for(int i = 100; i< 1000; i++)
    {
        sum_cifri = i % 10 + i /10 %10 + i / 100;
        if(sum_cifri == sum)
        {
            cout<<i<<" ";
        }
    }


return 0;
}
