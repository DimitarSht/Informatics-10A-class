#include<iostream>
using namespace std;
/*
Задача 4:
Напишете рекурсивна функция, която проверява
дали цифрите на дадено положително число
са подредени в нарастващ ред.
*/
bool isIncreasing(int number, bool result, int MinNumber)
{
    if(number == 0)
    {
        return result;
    }
    if(number%10 < MinNumber)
    {
        MinNumber = number % 10;
        if(number % 10 == number && MinNumber == number)
        {
            result = true;
        }
//        else if(number % 10 == number && MinNumber != number)
//        {
//            result = false;
//        }
    }
    else if(number%10 > MinNumber)
    {
        result = false;
    }
    return isIncreasing(number/10, result, MinNumber);
}
int main()
{
    int number;
    cin>>number;
    cout<<isIncreasing(number, true, 10);

    /// число към масив
//    int arr[1024];
//    for(int i = 0; number != 0; i++)
//    {
//        arr[i] = number%10;
//        number /= 10;
//    }


    return 0;
}
