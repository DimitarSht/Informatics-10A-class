#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream my_file("zad3.txt");
     if (!my_file)
    {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }
    int number;
    my_file>>number;
    int*arr=new int[number];
    for(int i=0; i<number; i++)
    {
        int edno;
        my_file>>edno;
        arr[i]=edno;

    }
    for(int i=0;i<number-1;i++)
    {
        for(int j=0;j<number-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    ofstream novfile("zad31.txt");

    for(int i=0; i<number; i++)
    {
       novfile<<arr[i]<<" ";

    }
    if (!novfile)
    {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }

    novfile.close();
    my_file.close();
    return 0;

}

