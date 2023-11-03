#include<iostream>
using namespace std;

bool symetric(int **table, int size)
{
    bool isSymetric = false;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(table[i][j] == table[j][i])
            {
                isSymetric = true;
            }
        }
    }

    return isSymetric;
}
int main()
{
    int n;
    cin>>n;

    int **table = new int*[n];
    for(int i = 0; i < n; i++)
    {
        table[i] = new int[n];      // заделяме памет за стълбове!!!
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];      // въвеждаме масива
        }
    }
    cout<<symetric(table, n);
    for(int i = 0; i < n; i++)
    {
        delete[] table[i];      // освобождаваме паметта за колоните!!!
    }
    delete[] table;

    return 0;
}
