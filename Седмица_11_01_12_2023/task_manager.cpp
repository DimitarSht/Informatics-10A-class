#include<iostream>
#include<string>
using namespace std;
/*
Създайте структура Task, представляваща задача с описание,
срок за изпълнение и статус (например, "изпълнена" или "незавършена").
Реализирайте функции, които:
1)	Променя статуса на задачата - от изпълнена на незавършена и обратното
2)	Променя срока за изпълнение.
3)  Принтира задачата
Създайте масив от задачи и намерете колко задачи са изпълнени
и на колко задачи срокът им изтича след 5 дни.
*/

struct Task
{
    string description;
    int deadline;
    bool status;
};

void changeStatus(Task &task1)
{
    if(task1.status)
    {
        task1.status = 0;
    }
    else
    {
        task1.status = 1;
    }
    cout<<"Status changed!"<<endl;
}

/// Променя срока за изпълнение
void changeDeadline(Task &task1, int newDealine)
{
    if(task1.deadline < newDealine)
    {
        task1.deadline = newDealine;
        cout<<"Deadline changed!"<<endl;
    }
    else
    {
        cout<<"Cannot changed deadline!"<<endl;
        /// break; - прекъсваме цикъл
        return; /// - прекъсваме функция
    }
}

int countDone(Task *arrTask, int countTasks)
{
    int counter = 0;
    for(int i = 0; i < countTasks; i++)
    {
        if(arrTask[i].status == 1)
        {
            counter++;
        }
    }
    return counter;
}

int countLeft5Days(Task *arrTask, int countTasks)
{
    int counter = 0;
    for(int i = 0; i < countTasks; i++)
    {
        if(arrTask[i].deadline <= 5)
        {
            counter++;
        }
    }
    return counter;
}

void printTask(const Task &task1)
{
    cout<<task1.description<<" "
        <<task1.deadline<<" "<<task1.status<<endl;
}

int main()
{
    struct Task task1;
    cout<<"Enter task: "<<endl;
    getline(cin, task1.description); /// въвежда до enter, тоест няколко думи
    /// cin>>task1.description;  /// въвежда до space, тоест една дума
    cin>>task1.deadline>>task1.status;

    struct Task *arrTasks = new Task[countTasks];

    /// Change status
    changeStatus(task1);

    /// Change deadline
    changeDeadline(task1, 20);

    /// Print task
    printTask(task1);

    delete[] arrTasks;
    return 0;
}
