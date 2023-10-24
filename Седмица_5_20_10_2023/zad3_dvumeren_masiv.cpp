/*
3. Даден е масив с размери M x N и цялото число K (1 < K < M).
Да се изведат елементите от K-я ред на дадената матрица и тяхната сума.
*/
#include<iostream>
using namespace std;

const int MAX_SIZE = 100;

void input(int **arr, int row, int column)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
    }
}
int main()
{
    int redove, stalbove, K;
    cin>>redove>>stalbove>>K;
    int table[redove][stalbove];
    int *ptr = &table[0][0];
    //ptr = table;
    input(&ptr, redove, stalbove);

    /*if(i == K)
    {
        cout<<table[i][j]<<" ";
    }*/

return 0;
}
