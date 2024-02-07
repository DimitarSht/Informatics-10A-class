#include<iostream>
using namespace std;
int main()
{
    int num, sbor_cifri = 0;
    cin>>num;
    int tmp = num;
    while(num != 0)
    {
        sbor_cifri += num % 10;
        num = num / 10;
    }
    if(tmp % sbor_cifri == 0) cout<<"kratno na "<<sbor_cifri;
    else cout<<"Ne e kratno na "<<sbor_cifri;





return 0;
}
