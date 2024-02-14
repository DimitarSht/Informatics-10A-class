#include<iostream>
using namespace std;

int fact_rec(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * fact_rec(n-1);
}
int main()
{
    cout<<fact_rec(3);

    return 0;
}
