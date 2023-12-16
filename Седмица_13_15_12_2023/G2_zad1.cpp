#include<iostream>
using namespace std;
int main()
{
    int n, tmp;
    cin>>n;
    int table[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int k = 0 ; k < n; k++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n - i - 1; j++)
            {
                if(table[j+1][k] > table[j+1][k])
                {
                    //swap(table[k][j], table[k][j+1]);
                    tmp = table[j][k];
                    table[j][k] = table[j+1][k];
                    table[j+1][k] = tmp;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
