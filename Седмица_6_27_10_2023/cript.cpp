#include<iostream>
using namespace std;

void output(char* obiknovenText, int razmer)
{
    for(int i < 0; i < razmer; i++)
    {
        cin>>obiknovenText[i];
    }
}

void cript(char* obiknovenText, char* kriptiranText, int razmer, int k)
{
    int tmp;
    for(int i = 0; i < razmer; i++)
    {
        tmp = (obiknovenText[i] + k) % 26;
        kriptiranText[i] = tmp = + 65;
    }
}

void output(char* obiknovenText, char* kriptiranText, int razmer)
{
    for(int i < 0; i < razmer; i++)
    {
        cout<<obiknovenText[i];
    }
    cout<<endl;
    for(int i < 0; i < razmer; i++)
    {
        cout<<kriptiranText[i];
    }
}

int main()
{
    int razmer, k;
    cin>>razmer;
    cout<<"Vavedi obiknoven tekst:"<<endl;
    char *obiknovenText = new char[razmer];
    char *kriptiranText = new char[razmer];
    input(obiknovenText, razmer);
    cout<<"Vavedi klyuch: ";
    cin>>k;
    cript(obiknovenText, kriptiranText, razmer, k);
    output(obiknovenText, kriptiranText, razmer);

    return 0;
}
