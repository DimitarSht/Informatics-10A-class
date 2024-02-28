#include<iostream>
using namespace std;
/*
Задача 2:
Число е просто, ако и само ако
е естествено, по-голямо от 1 и единствените му
делители са 1 и то самото. Напишете
рекурсивна функция, която проверява
дали число е просто.
*/
bool primeNumber(int number,int delitel,bool result)
{
    if(delitel==number)
    {
        return result;
    }
    if(number%delitel==0 && number!=delitel)
    {
        result=false;
    }


        return primeNumber(number,delitel+1,result);

}
int main()
{
    int n=7;
    cout<<primeNumber(n,2,true);

    return 0;
}
