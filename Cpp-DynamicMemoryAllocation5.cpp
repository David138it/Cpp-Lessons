/*
Выделить динамически память под матрицу из 3 строк и 3 столбцов целого типа.
Первые две строки рассматривать как векторы со случайными значениями элементов в диапазоне от 5 до 10.
Третью строку рассчитать как векторное произведение первых двух векторов. Матрицу вывести на экран.
*/
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0)); // генерация случайных чисел
    int **ptrarray = new int* [3]; // две строки в массиве
        for (int count = 0; count < 3; count++)
            ptrarray[count] = new int [3]; // и пять столбцов
        // заполнение массива
        for (int count_row = 0; count_row < 3; count_row++)
            for (int count_column = 0; count_column < 3; count_column++)
                ptrarray[count_row][count_column] = (rand() % 10 + 5) / int((rand() % 10 + 5)); //заполнение массива случайными числами с масштабированием от 1 до 10
        // вывод массива
        for (int count_row = 0; count_row < 3; count_row++)
        {
            for (int count_column = 0; count_column < 3; count_column++)
                cout << ptrarray[count_row][count_column] << "   ";
            cout << endl;
        }
        // удаление двумерного динамического массива
        for (int count = 0; count < 3; count++)
            delete []ptrarray[count];
    return 0;
}