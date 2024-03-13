#include<iostream>
using namespace std;
/*
Задача 5:
число към масив (рекурсивно)
*/

int amountDigits(int number, int digits)
{
    if(number == 0)
    {
        return digits;
    }
    return amountDigits(number/10, digits+1);
}

void numToArr(int number, int arr[], int idx)
{
    if(number == 0)
    {
        return;
    }
    arr[idx] = number % 10;
    numToArr(number/10, arr, ++idx);
}

int main()
{
    int number;
    cin>>number;
    int digits = amountDigits(number, 0);
    int arr[digits];
    numToArr(number, arr, 0);

    /// число към масив
//    int arr[1024];
//    for(int i = 0; number != 0; i++)
//    {
//        arr[i] = number%10;
//        number /= 10;
//    }


    return 0;
}
