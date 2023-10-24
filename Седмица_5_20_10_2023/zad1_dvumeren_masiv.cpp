/*
1. Дадени са целите положителни числа M, N и набор от M числа.
Да се създаде масив с размери M x N,
чиито елементи във всеки стълб са всички числа от дадения набор (в същия ред).
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
            table[i][j] = arr[i];
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}


/*
#include<iostream>
using namespace std;
int main()
{
    int x = 4, y =3;

    //cin>>x;
    int table[x][x] = {1,2,3,
                       4,5,6
                       7,8,9};
    int arr[x][x];
    /// Въвеждаме двумерния масив
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            cin>>arr[i][j];
        }
    }

    /// Извеждаме на екрана масива
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    char tablica[x][y];  /// таблица от символи
    /// Въвеждаме двумерния масив
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cin>>tablica[i][j];
        }
    }

    /// Извеждаме на екрана масива
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            //if(i == j)
            cout<<tablica[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(i == j)
            {
                cout<<tablica[i][j]<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(i + j == x - 1)
            {
                cout<<tablica[i][j]<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }


    return 0;
}*/
