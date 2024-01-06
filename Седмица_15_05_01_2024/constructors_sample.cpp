#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
    string name;          /// член-данни
    int age;              /// член-данни
    int height;           /// член-данни
public:
    Person() {} /// конструктор по подразбиране
    Person(const string &newName, int newAge, int newHeight) /// конструктор с параметри
    {
        name = newName;
        age = newAge;
        height = newHeight;
    }
    Person(const Person &other)     /// copy конструктор
    {
        if(this != &other)
        {
            name = other.name;
            age = other.age;
            height = other.height;
        }
    }
    ~Person(){}  /// деструктор

    void setAge(int newAge)
    {
        age = newAge;
    }
    void setName(const string &newName)
    {
        name = newName;
    }
    void setHeight(int newHeight)
    {
        height = newHeight;
    }
    int getAge()
    {
        return age;
    }
    void print()
    {
        cout<<name<<" "<<age<<" "<<height;
    }
    void changeName(const string &newName)
    {
        name = newName;
    }
};

void changeHeight(Person &person)
{
    if(person.getAge() == 10)
    {
        person.setHeight(120);
    }
}



int main()
{
    Person Petar;               /// създаване на обект Petar чрез конструктора по подразбиране

    Person Ivan("Ivan", 8, 100);    /// създаване на обект Ivan чрез параметризирания конструктор
    ///Person Ivan = Person("Ivan", 8, 100);

    //Ivan.setName("Ivan");
    //Ivan.setHeight(130);
    //Ivan.setAge(8);

    Ivan.print();
    cout<<endl;

    Ivan.setAge(10);        
    changeHeight(Ivan);     /// changeHeight е извън дефиницията на класа, затова подаваме Ivan като параметър

    Ivan.changeName("Petar");  /// changeName е вътре в дефиницията на класа в секция public, затова извикваме changeName за обекта Ivan от тип Person


    /*int currAge = Ivan.getAge();
    cout<<Ivan.getAge()<<endl;
    Ivan.setAge(currAge+1);

    //double average = (Ivan.getAge() + Petar.getAge()) / 2

    //cout<<Ivan.getName()<<" "<<
    cout<<Ivan.getAge();//<<" "<<
    //    Ivan.getHeight();;*/
    Ivan.print();
    return 0;
}
