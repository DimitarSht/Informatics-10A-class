#include<iostream>
using namespace std;
int main()
{
    /// Преговор

    /// Какво е двумерен масив?
    /// Таблица с редове и колони

    ///Как декларираме двумерен масив – статично и динамично?
    /// статично:
    ///int row, col;
    ///cin>>row>>col;
    ///<тип на масива> <името на масива>[редове][колони]
    int table[row][col];

    /// динамично:
    int n; /// квадратна таблица
    int **table = new int*[n];      // заделяме памет за редове!!!
    for(int i = 0; i < n; i++)
    {
        table[i] = new int[n];      // заделяме памет за стълбове!!!
    }

    /// След това задължително освобождаваме паметта!
    for(int i = 0; i < n; i++)
    {
        delete[] table[i];
    }
    delete[] table;

    ///Как достъпваме елементите на двумерния масив?
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];      // въвеждаме масива
        }
    }

    ///Как обхождаме диагоналите на двумерния масив?
    /// главен диагонал - if(<индекс_редове> == <индекс_колони>)
    /// втори главен диагонал - if(<индекс_редове> + <индекс_колони> == <размера на масива> - 1)

    ///Каква е разликата между оператор звезда (*) и адресен оператор (&)?
    /// &x - адресът на х в паметта
    /// *x - указател х, който пази няккаъв адрес
    /// int *ptr; - декларираме указател
    /// *ptr = &x; - указател ptr от тип int и пази адресът на х
    /// cout<<ptr; - извежда адресът, който се пази от ptr
    /// cout<<*ptr; - извежда стойността, която е запазена на адреса, към който сочи ptr

    /// По какви начини можем да подадем на параметър на функция?
    /// 1. void print(int x); - копието на х
    ///    int main()
    ///     {
    ///        print(x);
    ///     }

    /// 2. Параметър с * в декларацията на функцията (преди main), извикваме функцията в main-a, като пред параметъра пишем &
    /// 3. Параметър с & в декларацията на функцията (преди main), извикваме функцията в main-a като в 1.

    /// Какво е структура в С++?
    /// Тип данни, в който можем да запазим други данни

    /// Как декларираме структура в С++?
    /// struct <име на самата структура>
    {
            <член-данни>
    };

    main()
    {
        struct <име на самата структура> <име на обекта>
    }

    /// По какви начини можем да достъпим член-данните на дадена структура?
    /// Използваме оператор точка
    /// struct Point p1;
    /// p1.x; - х-ка на p1

    /// Какви са разликите между масивите и структурите?
    /// 

    /// Какви задачи можем да решаваме със структури?
    /// Използваме данните от структурите, за да решаваме задачи с обекти

    return 0;
}
