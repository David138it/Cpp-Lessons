//Операции сравнения
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int a = 10;
        int b = 20;
        int *pa = &a;
        int *pb = &b;
        if(pa > pb)
            cout << "pa (" << pa << ") is greater than pb ("<< pb << ")" << endl;
        else
            cout << "pa (" << pa << ") is less or equal pb ("<< pb << ")" << endl;
    return 0;
}