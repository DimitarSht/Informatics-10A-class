#include<iostream>
using namespace std;
int main()
{
    int sum, number, position = 1, maxPosition;
    int maxNumber = 0;
    while(sum < 10000)
    {
        cin>>number;
        sum = sum + number;

        if(number > maxNumber)
        {
            maxNumber = number;
            maxPosition = position;
        }
        position++;
    }
    cout<<maxNumber<<" "<<maxPosition;

    return 0;
}
