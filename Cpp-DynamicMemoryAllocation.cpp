//Нужно организовать динамический ввод квадратной матрицы.
#include <iostream>
using namespace std;
int main()
{
    int n, i ,j;
    cout<<"Enter size : ";
    cin>>n;
    int **a=new int *[n];
    for (i=0; i<n; i++)
    a[i]=new int[n];
    cout<<"Enter matrix\n";
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
                cin>>a[i][j];
    return 0;
}
