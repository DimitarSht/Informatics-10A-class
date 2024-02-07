#include<iostream>
using namespace std;

int sum(int *masiv, int razmer)
{
    int sum = 0;
    for(int i = 0; i < razmer; i++)
    {
        sum+=masiv[i];
    }
    return sum;
}

int main()
{
    int razmer;
    cin>>razmer;
    int *masiv = new int[razmer];
    cout<<"Vavedi masiv:"<<endl;
    for(int i = 0; i < razmer; i++)
    {
        cin>>masiv[i];
    }
    cout<<sum(masiv, razmer);

    delete[] masiv;

    /*int n = 4;
    int **table = new int*[n];
    for(int i = 0; i < n; i++)
    {
        table[i] = new int[n];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];
        }

    }

    for(int i = 0; i < n; i++)
    {
        delete[] table[i];
    }
    delete[]table;*/

    return 0;
}
