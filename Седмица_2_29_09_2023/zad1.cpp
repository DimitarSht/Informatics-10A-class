#include<iostream>
using namespace std;
int main()
{
    int counter_negative = 0, counter_last_digit = 0;
    int a;
    while(counter_negative < 2)
    {
        cin>>a;
        if(a<0)
        {
            counter_negative++;
        }
        if(a % 10 == 5)
        {
            counter_last_digit++;
        }
    }
    cout<<counter_last_digit;


return 0;
}
