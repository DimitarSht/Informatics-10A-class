#include<iostream>
using namespace std;
/*
Задача 3:
Число е перфектно, ако и само ако е
естествено и равно на сумата на
делителите си
без самото число. Напишете рекурсивна
функция, която проверява дали число е
перфектно.
*/

bool isPerfect(int number, int divisor, int sum){

if (divisor == number){

    return sum == number;

}
    if (number % divisor == 0){

         sum += divisor;
    }
    return isPerfect(number, divisor + 1, sum);
}

int main()
{
    int number;
    cin >> number;
    cout << isPerfect(number, 1,0);
    return 0;
}
