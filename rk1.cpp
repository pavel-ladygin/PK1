#include <iostream>
using namespace std;

int main()
{
    int size = 1;

    std::string *task = new string [size];
    int *priority = new int [size];
    std::string *date = new string [size];

    int i = 0;

    while (true)
    {
        char task1[10];
        int priority1;
        char date1[10];

        cout << "Введите название задачи: (без пробелов)";
        cin >> task1;

        cout << "Введите приоритет задачи (целое число от 1 до 10): ";
        cin >> priority1;

        cout << "Введите срок выполнения задачи: (например, 10октября)";
        cin >> date1;

        task[i] = task1;
        priority[i] = priority1;
        date[i] = date1;
        i = i +1;

        cout << "Задача добавлена!" << endl;
        cout << "Хотите добавить еще одну задачу? (да/нет): ";
        std::string flag;
        cin >> flag;

        if (flag == "нет")
        {
            break;
        }
        else
        {
            size++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (priority[j] < priority[j+1])
            {
                swap (priority[j], priority[j+1]);
                swap (task[j], task[j+1]);
                swap (date[j], date[j+1]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << i+1 << ". Задача: "<< " " << task[i] << " Приоритет " << priority[i] << " Срок выполнения " << date[i] << endl;
    }

    delete [] task;
    delete [] date;
    delete [] priority;



    return 0;
}
