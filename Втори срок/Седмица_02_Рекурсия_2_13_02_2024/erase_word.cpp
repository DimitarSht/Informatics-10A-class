#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    getline(cin,str1);
    cin>>str2;
    int fstElement = str1.find(str2);
    int lengthStr2 = str2.length();
    str1.erase(fstElement, lengthStr2);

    cout<<str1;
    return 0;
}
