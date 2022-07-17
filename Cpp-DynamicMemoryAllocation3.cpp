//Разработаем программу, в которой создадим двумерный динамический массив.
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
        srand(time(0)); // генерация случайных чисел
        int **ptrarray = new int* [2]; // две строки в массиве
        for (int count = 0; count < 2; count++)
            ptrarray[count] = new int [5]; // и пять столбцов
        // заполнение массива
        for (int count_row = 0; count_row < 2; count_row++)
            for (int count_column = 0; count_column < 5; count_column++)
                ptrarray[count_row][count_column] = (rand() % 10 + 1) / int((rand() % 10 + 1)); //заполнение массива случайными числами с масштабированием от 1 до 10
        // вывод массива
        for (int count_row = 0; count_row < 2; count_row++)
        {
            for (int count_column = 0; count_column < 5; count_column++)
                cout << ptrarray[count_row][count_column] << "   ";
            cout << endl;
        }
        // удаление двумерного динамического массива
        for (int count = 0; count < 2; count++)
            delete []ptrarray[count];
    return 0;
}