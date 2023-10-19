#include<iostream>
using namespace std;
int main()
{
    int N, sum = 0, sum_chislo = 0, broqch = 0, average = 0;
    int sum_redica = 0;
    cin>>N;
    //int arr[N - 100];
    for(int i = 100; i <= N; i++)
    {
        //arr[i] = i;
        sum_redica += i;
        sum_chislo = i % 10 + i /10 %10 + i / 100;
        sum += sum_chislo;
        broqch++;
    }
    average = sum_redica / broqch;
    cout<<sum<<" "<<average<<endl;


return 0;
}
