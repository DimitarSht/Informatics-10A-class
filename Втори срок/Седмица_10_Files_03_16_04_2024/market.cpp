#include<bits/stdc++.h>
#include<string>

using namespace std;

// Структура, представляваща продукт
struct Product {
    string name;
    int quantity;
    double price;

    // Конструктор за улеснение на инициализацията
    Product(string n, int q, double p) : name(n), quantity(q), price(p) {}
};

double profit = 0;

// Функция за намиране на индекса на продукта в инвентара
int findProductIndex(Product** inventory, int size, const string& name) {
    for (int i = 0; i < size; ++i) {
        if (inventory[i]->name == name) {
            return i;
        }
    }
    return -1;
}

// Функция за обновяване на инвентара
void updateInventory(Product** inventory, int size, const string& name, int quantity) {
    int index = findProductIndex(inventory, size, name);
    if (index != -1) {
        if (inventory[index]->quantity >= quantity) {
            inventory[index]->quantity -= quantity;
            profit += inventory[index]->price * quantity;
            cout << fixed << setprecision(2) << inventory[index]->price * quantity << endl;
        } else {
            cout << "Not enough " << name << endl;
        }
    } else {
        cout << "Product not found: " << name << endl;
    }
}

int main() {
    ifstream file("inventory.txt");
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int N;
    file >> N;
    Product** inventory = new Product*[N];

    // Четене на информацията за продуктите от файла
    for (int i = 0; i < N; ++i) {
        string name;
        int quantity;
        double price;
        file >> name >> quantity >> price;
        inventory[i] = new Product(name, quantity, price);
    }

    file.close();

    int M;
    cin >> M;
    string name;
    int quantity;

    // Обновяване на инвентара според получените заявки
    for (int i = 0; i < M; ++i) {
        cin >> name >> quantity;
        updateInventory(inventory, N, name, quantity);
    }

    cout << "Overall profit: " << profit << endl;
    // Освобождаване на заделената памет
    for (int i = 0; i < N; ++i) {
        delete inventory[i];
    }
    delete[] inventory;

    return 0;
}
