#include <iostream>
#include <fstream>
#include <string>

const int maxusers = 100;

struct User {
    string username;
    string password;
    string firstname
    string lastname;
    int birthyear;
};


void register( ofstream my_file, const string& username, const string& password, const string& firstname, const string& lastname, int birthyear, User users[], int& size) {
    if (size >= users) {
        cout << "Can't register more people" << endl;
        return;
    }
    users[size++] = {username, password, firstname, lastname, birthyear};
    my_file << username << " " << password << " " << firstname<< " ">> lastname << " " << birthyear << endl;
cout << " Registered successfully." << endl;
}


void login(ifstream& novfile, const string& username, const string& password, User users[], int size) {
    User user;
    for (int i = 0; i < size; ++i) {
        if (users[i].username == username && users[i].password == password) {
            return users[i];
        }
    }
    return; 
}

void removeuser(ofstream& my_file, User users[], int& size, const string& removename) {
    for (int i = 0; i < size; ++i) {
        if (users[i].username == removename) {
            for (int j = i; j < size - 1; ++j) {
                users[j] = users[j + 1];
            }
            size--;
            cout << " Removed successfully." << endl;
            return;
        }
    }
    cout << "No such user" << endl;
}

int main() {
   ifstream my_file("zad2.txt");
   if(!my_file) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }
    ofstream my_file("zad21.txt");
    if(!novfile) {
        cout << "Error: Unable to open the file." << endl;
        return 1; 
    }
    User users[maxusers];
    int size = 0;
    register(my_file, username, password,firstname, lastname, birthyear, users, size);
    login(novfile, username, password, users, size);
     string removename;
      cin >> removename;
    removeuser(outFile, users, size, removename);
    my_file.close();
    novfile.close();

    return 0;
}