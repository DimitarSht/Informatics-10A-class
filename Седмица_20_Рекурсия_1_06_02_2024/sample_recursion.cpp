#include<iostream>
using namespace std;
void print11(int n)
{
    if(n > 10)
    {
        cout<<"11!!!"<<endl;
        return;
    }
    cout<<n<<endl;
    print11(++n);
}
int main()
{
    cout<<"0"<<endl;
    print11(1);
    cout<<"2"<<endl;
}
