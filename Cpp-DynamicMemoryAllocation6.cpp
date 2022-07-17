/*
Для заданной матрицы размером n на m найти такие k, что k-ая строка матрицы совпадает с k-ым столбцом.
Найти сумму элементов в тех строках, которые содержат хотя бы один отрицательный элемент.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
int** sozdanie(int n, int m)
{
    int **A;// Создаем матрицу введенной размерности
    A = new int *[n]; // через массив указателей
    for (int i = 0; i < n; i++) {
       A[i] = new int [m];
    }
    return A;
}
void initialize( int** A, int n, int m) // будем передавать динамический массив и размерность в качестве параметра
{
    srand(time(0));
    for(int i = 0; i < n; i++ )
    {
        for(int j = 0;  j < m;  j++ )
        {
            A[i][j] = rand()%11 - 5 ;
            printf("%d     ",A[i][j]);
        }
        printf("\n");
    }
}
void compare(int** A, int n, int m) // Функция сравнения
{
    int count(0), k(0);
    for(int i = 0; i < n; i++ )
    {
        for(int j = 0;  j < m;  j++ )
        {
            if(A[i][j] == A[j][i])
            {
                count++;
            }
            if (count == n)
            {
                printf("\n%d Stroka sovpadaet s %d stolbcom \n",i+1,i+1);
                k ++;
            }
        }
        count = 0;
    }
    if(k == 0)
    printf("\n\n Net sovpadaushih strok i stolbcov\n");
}
void summa (int** A, int n, int m) // Функция суммы
{
    int result(0);
    for(int i = 0; i < n; i++ )
    {
        for(int j = 0;  j < m;  j++ )
        {
            if(A[i][j] < 0)
            {
                for(int count = 0; count < m; count ++)
                {
                    result += A[i][count];
                }
                printf("\n Summa elementov na %d stroke ravna %d\n",i+1,result);
                j = m;
                result = 0;
            }
        }
    }
}
int main()
{
    int n(0), m(0);
    printf(" Vvedite kolichestvo strok v massive\n");
    scanf("%d",&n);
    printf(" Vvedite kolichestvo stolbcov v massive\n");
    scanf("%d",&m);
    printf("\n");
    int **A;
    A = sozdanie(n,m); // Создаем через функцию
    initialize(A, n, m); // заполняем матрицу
    compare(A, n, m); // сравниваем столбцы и строки
    summa(A, n, m); // считаем сумму элементов на строке с отрицательным элементом
    for ( int i = 0; i < n; i++ )
    {
        delete [] A[ i ];
    }
    delete [] A; // Освобождение памяти
    return 0;
}