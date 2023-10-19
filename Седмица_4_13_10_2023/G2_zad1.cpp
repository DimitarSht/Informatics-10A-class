#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    for(int i = num; i > 0; i--)
    {
        if(i % 5 == 0) cout<<i<<" ";
    }


return 0;
}
