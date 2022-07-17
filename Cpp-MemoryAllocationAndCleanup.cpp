// Выделение памяти и ее очистка
#include <iostream>
using namespace std;
int main()
{
    int *a=new int; // выделение памяти
    *a=10;

    cout << *a;
    delete a; // очистка памяти
    return 0;
}
