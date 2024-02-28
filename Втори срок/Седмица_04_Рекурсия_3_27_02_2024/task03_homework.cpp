#include<iostream>
using namespace std;
bool decreasingDigits(int num, int lastDigit, bool result)
{
    if(num == 0)
    {
        return result;
    }
    if(num % 10 >= lastDigit)
    {
        result = true;
    }
    else
    {
        result = false;
        return result;
    }
    return decreasingDigits(num/10, num%10, result);
}

int sumNumbers(int start, int finish, int sum)
{
    if(start > finish)
    {
        return sum;
    }
    if(decreasingDigits(start/10, start%10, false))
    {
        sum += start;
    }
    return sumNumbers(start+1,finish, sum);
}
int main()
{
    if(start <= finish)
    {
        cout<<sumNumbers(start,finish,sum);
    }
    else
    {
        cout<<sumNumbers(finish, start, sum);
    }
    return 0;
}
