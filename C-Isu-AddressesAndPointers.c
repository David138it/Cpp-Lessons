/*
Пользуясь только указателями, заполнить массив десятью целыми случайными числами в диапазоне от 0 до 10. Вывести пронумерованный массив значений в столбец на экран. После этого напечатать номера, значения и адреса тех элементов, которые оказались четными. Использовать операцию %.
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i, arr[10];
    for(i=0; i<10; i++){
        arr[i]=rand()%11;
        printf("%d\n",arr[i]);
    }
}    