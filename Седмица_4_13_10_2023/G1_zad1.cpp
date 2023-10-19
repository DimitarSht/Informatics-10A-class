#include<iostream>
using namespace std;
int main()
{
    int k, sum = 0, elementi_redica = 1;
    cin>>k;
    for(int i = 0; i < k; i++)
    {
        elementi_redica = elementi_redica + k;
        sum = sum + elementi_redica;
        cout<<elementi_redica<<" ";
    }

    cout<<endl<<sum;

return 0;
}
