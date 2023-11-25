#include<iostream>
#include<string>
using namespace std;
/*
Създайте структура Car, представляваща автомобил с марка, модел,
година на производство и цвят.

Създайте структура Garage, представляваща гараж с масив от автомобили.
Реализирайте функции за добавяне и изваждане на автомобили от гараж,
както и функции за извеждане на информация за автомобилите.
*/
const int MAX_SIZE = 10;
struct Car
{
    string brand;
    string model;
    string color;
    int year;
};

struct Garage
{
    Car cars[MAX_SIZE];
    int numberCars;
};

void addCar(const Car &carToAdd, Garage &gar)
{
    if(gar.numberCars < MAX_SIZE)
    {
        gar.cars[gar.numberCars++] = carToAdd;
    }
}

void removeCar(Garage &gar, int index)
{
    /// 1. Намираме точно коя кола искаме да изтрием
    /// 2. Преместваме всички коли, които са след изтритата кола, с една позиция назад
    /// 3. Намаляваме размера на масива от коли с 1
}

int main()
{
    struct Car car1 = {"Opel", "Vectra", "Blue", 2000};
    struct Garage gar1;
    gar1.numberCars = 0;
    addCar(car1, gar1);
    cout<<gar1.cars[0].brand<<" "<<gar1.cars[0].model<<" "
        <<gar1.cars[0].color<<" "<<gar1.cars[0].year;

    return 0;
}
