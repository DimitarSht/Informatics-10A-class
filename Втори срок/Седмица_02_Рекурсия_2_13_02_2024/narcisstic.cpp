#include<iostream>
#include<cmath>
using namespace std;
/*
2.	Едно число е нарциситично, ако сумата на цифрите му е равна на сумата от всяка цифра на числото, повдигната на степен броя на цифрите на самото число. Напишете рекурсивна функция, която проверява дали дадено число е нарцистично.
Пример:
Числото 153 – то има 3 цифри:
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
Числото 1634 – то има 4 цифри:
1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634
*/

int num_digits(int n, int counter)
{
    if(n < 10)
    {
        counter +=1;
        return counter;
    }
    num_digits(n/10, counter+1);
}

int narcissistic_sum(int leftover, int power, int sum)
{
    if(leftover == 0)
    {
        return sum;
    }
    sum = sum + pow(leftover%10, power);
    narcissistic_sum(leftover/10, power, sum);
}

bool narcissistic(int n)
{
    if(n == (narcissistic_sum(n, num_digits(n,0),0)))
    {
        return 1;
    }
    else return 0;
}


int main()
{
    cout<<num_digits(123,0);
    cout<<narcissistic(7);
    return 0;
}

