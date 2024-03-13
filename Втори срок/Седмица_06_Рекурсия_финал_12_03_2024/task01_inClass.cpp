#include<iostream>
using namespace std;
/*
Задача 1:
Да се напише рекурсивна функция, която
проверява дали дадено число се съдържа
в даден масив.
*/
bool contains(int arr[], int sz, int idx, int number)
{
    if(arr[idx] == number)
    {
        return true;
    }
    if(idx == sz)
    {
        return false;
    }
    return contains(arr, sz, ++idx, number);
}

bool containsResult(int arr[], int sz, int idx, int number, bool result)
{
    if(idx == sz)
    {
        return result;
    }
    if(arr[idx] == number)
    {
        result = true;
    }
    return containsResult(arr, sz, ++idx, number, result);
}
int main()
{


    return 0;
}
