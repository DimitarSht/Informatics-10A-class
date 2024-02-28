#include<iostream>
using namespace std;
/*
Задача 1:
Да се напише рекурсивна функция, която
връща сумата на всички делители на цяло
число. Ако числото е отрицателно,
функцията да върне 0.
*/
int sumOfDeliteli(int a,int b, int sum){
    if(a<0){
        sum = 0;
        return sum;
    }
    if(b==0){
        return sum;
    }
    if(a%b==0){
        sum = sum+b;
    }
    return sumOfDeliteli(a,b-1,sum);
}
int main()
{
    int a;
    cin>>a;
    cout<<sumOfDeliteli(a,a,0);
    return 0;
}
