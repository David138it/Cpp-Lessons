//Заполнить матрицу 6*6 случайными целыми числами в диапазоне от 0 до 200. Вывести матрицу на экран в виде таблицы. После этого вывести матрицу в транспонированном виде. 
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,m[6][6];
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            m[i][j]=rand()%200;
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
        for(i=0;i<6;i++)
        {
                for(j=0;j<6;j++)
                {
            printf("%d\t",m[j][i]);
                }
                printf("\n");
        }
}