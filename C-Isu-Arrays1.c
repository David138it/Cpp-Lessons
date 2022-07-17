//Написать программу, которая формирует единичную матрицу и выводит ее на экран
#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,M[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                M[i][j]=1;
            } else{
                M[i][j]=0;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d",M[i][j]);
        }
        printf("\n");
    }
}