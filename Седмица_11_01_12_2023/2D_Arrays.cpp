#include<iostream>
using namespace std;
/*
3.	Оценки на ученици в клас:
Напишете програма, която въвежда двумерен масив
с оценките на ученици в клас.
Сортирайте масива и намерете ученикът с най-висок успех.
*/

int main()
{
    /*
    1. Въвеждаме оценките
    2. Сортираме оценките
    3. Намираме средното аритметично на всеки един ред
    4. Намираме max и min среден успех
    5. Разменим редовете на min и max,
        така че max да е на 1-ви ред, а min - на последен
    6. Принтваме масива
    */

    int students, subjects, tmp;
    cin>>students>>subjects;

    int **grades = new int*[students];
    for(int i = 0; i < students; i++)
    {
        grades[i] = new int[subjects];
    }

    for(int i = 0; i < students; i++)
    {
        for(int j = 0; j < subjects; j++)
        {
            cin>>grades[i][j];
        }
    }

    for(int k = 0; k < students; k++)  /// Вървим по редове
    {
        /// Bubble sort за всеки един ред
        for (int i = 0; i < subjects - 1; i++)
        {
            for (int j = 0; j < subjects - i - 1; j++)
            {
                if (grades[k][j] > grades[k][j + 1])
                {
                    tmp = grades[k][j+1];
                    grades[k][j+1] = grades[k][j];
                    grades[k][j] = tmp;
                }
            }
        }
    }

    int sum = 0, rowMAX, rowMIN;
    double average = 0, currMAX = 2, currMIN = 6;

    for(int i = 0; i < students; i++)
    {
        for(int j = 0; j < subjects; j++)
        {
            sum = sum + grades[i][j];
        }
        average = sum / subjects;
        if(average > currMAX)
        {
            currMAX = average;
            rowMAX = i;
        }
        if(average < currMIN)
        {
            currMIN = average;
            rowMIN = i;
        }
        sum = 0;
        average = 0;
    }

    cout<<rowMAX<<" "<<rowMIN;

    for(int i = 0; i < subjects; i++)
    {
        delete[] grades[i];      // освобождаваме паметта за колоните!!!
    }
    delete[] grades;

    return 0;
}
