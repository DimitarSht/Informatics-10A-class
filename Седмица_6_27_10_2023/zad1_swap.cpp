#include<iostream>
using namespace std;

void Swap_ukazatel(int* n1, int* n2)
{
    /// променяме адреси
    /*int *tmp = n1;
    n1 = n2;
    n2 = tmp;*/

    /// променяме стойности
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;

}

void Swap_ampersant(int &n1, int &n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}
int main()
{
    int num1 = 4, num2 = 5;

    cout<<num1<<" "<<num2<<endl;
    Swap_ukazatel(&num1, &num2);
    //Swap_ampersant(num1, num2);
    cout<<num1<<" "<<num2;

return 0;
}
