#include<iostream>
using namespace std;
/*
1.	Да се напише рекурсивна функция,
която намира сумата на цифрите на дадено
положително число.
*/
int sumN(int number, int sum)
{
    if(number==0)
    {
        return sum;
    }
    sum=number%10+sum;
    sumN(number/10, sum);

}
int main()
{
    cout<<sumN(123,0);
    return 0;
}
