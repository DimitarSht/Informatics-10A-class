#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/*
Задача 7: Да се реализира рекурсивна функция,
която приема стринг и връща дали стрингът
е палиндром.
*/
void palindrome(string str, int start, int finish)
{
    if(start >= finish)
    {
        return;
    }
    swap(str[start], str[finish]);

    palindrome(str, start + 1, finish - 1);
}

bool isPalindrome(string str)
{
    string strRev = str;
    palindrome(strRev, 0, strRev.length() - 1);
    return str == strRev;
}

int main()
{
    cout<<isPalindrome("abba");
    
    return 0;
}

