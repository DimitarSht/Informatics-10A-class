#include<bits/stdc++.h>
#include <string>
using namespace std;

const int MAX_SIZE = 50;

struct Product
{
    char name[MAX_SIZE];
    unsigned quantity;
    double price;
};

struct ProductArray
{
    Product *data;
    int size;
    int capacity;
};

void print_file(const char *filename)
{
    ifstream file(filename);

    char buff[MAX_SIZE] {};

    while (file >> buff)
    {
        cout << buff << ' ';
    }

    file.close();
}

ProductArray load_inventory(const char *inventory_filename)
{
    ifstream inventory(inventory_filename);

    int n;
    inventory >> n;

    ProductArray array{new Product[n],0,n};

    for (int i = 0; i < n; ++i)
    {
        /*
           Ако искаме да вземем целия ред:

           inventory.ignore();
           inventory.getline(array.data[i].name, MAX_SIZE);

           Налага се да извикаме ignore(), защото операторът >> спира да чете преди нов ред и
           getline() започва да чете от новия ред, което означава, че първото четене ще е
           празно. ignore() игнорира (или изхвърля) един символ и така getline() започва да чете
           от валиден символ.
        */
        inventory >> array.data[i].name
                  >> array.data[i].quantity
                  >> array.data[i].price;
        ++array.size;
    }

    return array;
}

int main()
{
    ProductArray array = load_inventory("inventory.txt");

    for (int i = 0; i < array.size; ++i)
    {
        cout<<array.data[i].name<<' '
                 <<array.data[i].quantity << ' '
                 <<array.data[i].price<<'\n';
    }

    /// Остатъкът от решението е същото както във файл market.cpp, но тук използваме
    /// структура, която ни съдържа масива от продукти, а там използваме двумерен масив
    /// Тоест махате едната звездичка от решението в market.cpp и използвате структурата array вместо Product** inventory 

    delete [] array.data;


    return 0;
}
