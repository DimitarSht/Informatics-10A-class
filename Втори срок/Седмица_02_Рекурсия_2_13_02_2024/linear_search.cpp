#include<iostream>
using namespace std;
/*
Задача 5: Да се реализира рекурсивна функция,
която приема произволен масив и число и
връща дали числото се съдържа в масива.
(Линейно търсене).
*/
bool contains(int *arr, int sz, int num, bool contain)
{
    if(sz == 0)
    {
         return contain;
    }
    if(arr[sz - 1] == num)
    {
        contain = true;
    }
    contains(arr, sz-1, num, contain);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<contains(arr, 5, 2, 0);
    return 0;
}
