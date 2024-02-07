#include<iostream>
#include<string>
using namespace std;
struct Car
{
    string make;
    string model;
    int year;
    string color;
};

bool parkCar(Car *garage, int sz, const Car &newCar)
{
    bool canPark = false;
    if(sz < 10)
    {
        garage[sz++] = newCar;
        canPark = true;
    }
    else
    {
        canPark = false;
    }
    return canPark;
}

int yearDifference(Car *garage, int sz)
{
    int minYear = 3000;
    int maxYear = -1000;
    int difference = 0;
    for(int i = 0; i < sz; i++)
    {
        if(garage[i].year < minYear)
        {
            minYear = garage[i].year;
        }
        if(garage[i].year > maxYear)
        {
            maxYear = garage[i].year;
        }
    }
    difference = maxYear - minYear;

    return difference;
}

int main()
{
    struct Car *garage = new Car[10];


    return 0;
}
