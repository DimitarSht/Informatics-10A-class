#include<iostream>
#include<string>
using namespace std;
struct Person
{
    int age;
    string name;
    string address;
};

int main()
{
    struct Person Chovek1;
    cout<<"Vavedi vazrast: ";
    cin>>Chovek1.age;

    cout<<"Vavedi ime: ";
    cin>>Chovek1.name;

    cout<<"Vavedi adres: ";
    cin>>Chovek1.address;

    cout<<Chovek1.age<<" "<<Chovek1.name<<" "<<Chovek1.address;

    return 0;
}
