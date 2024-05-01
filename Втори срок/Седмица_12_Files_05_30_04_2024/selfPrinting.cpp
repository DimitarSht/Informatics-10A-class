#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("selfPrinting.cpp");
    if(!fin)
    {
        cout<<"Error!"<<endl;
        return -1;
    }

    string line;
    while(!fin.eof()) /// eof() <==> end of file
    {
        getline(fin, line);
        cout<<line<<endl;
    }

    fin.close();

    return 0;
}
