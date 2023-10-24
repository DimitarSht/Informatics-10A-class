/*
2. Дадени са целите положителни числа M, N и набор от  N числа.
Да се създаде масив с размери M x N,
чиито елементи във всеки ред са всички числа от дадения набор (в същия ред).
*/
#include<iostream>
using namespace std;
int main()
{
    int M, N;
    cin>>M>>N;
    int arr[M];
    for(int i = 0; i < M; i++)
    {
        cin>>arr[i];
    }
    int table[M][N];
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            table[i][j] = arr[j];
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}
