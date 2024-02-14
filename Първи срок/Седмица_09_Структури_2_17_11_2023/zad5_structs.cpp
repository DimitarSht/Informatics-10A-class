#include<iostream>
#include<string>
using namespace std;
/*
5.	Създайте структура Student, която съдържа полета за име,
номер в клас и среден успех на ученика.
Създайте масив от ученици и намерете средния успех на класа.

6.	Използвайте структурата Student от задача 5 и
създайте структура за цял випуск.
След това намерете класовете с най-добър
и най-лош успех.
*/
struct Student
{
    string name;
    int numberInClass;
    double averageGrade;
};

struct Klas
{
    Student uchenici[20];
    double average;
};

double input(Student* klass, int studentsInClass)
{
    double averageInClass;
    for(int i = 0; i < studentsInClass; i++)
    {
        cin>>klass[i].name;
        klass[i].numberInClass = i + 1;
        cin>>klass[i].averageGrade;
        averageInClass = averageInClass + klass[i].averageGrade;
        cin.ignore();
    }
    averageInClass = averageInClass / studentsInClass;
    return averageInClass;
}
int main()
{
    int studentsInClass;
    cin>>studentsInClass;
    double averageInClass = 0.0, MAX_Average = 0.0, MIN_Average = 6.0;;
    Student* klass = new Student[studentsInClass];

    Klas* vipusk = new Klas[5];
    for(int i = 0; i < 5; i++)
    {
        averageInClass = input(klass, studentsInClass);
        vipusk[i].average = averageInClass;
        if(MAX_Average < averageInClass)
        {
            MAX_Average = averageInClass;
        }
        if(MIN_Average > averageInClass)
        {
            MIN_Average = averageInClass;
        }
    }

    cout<<MIN_Average<<" "<<MAX_Average;


    return 0;
}
