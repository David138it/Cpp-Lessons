//Операции с указателями. Присвоить указателю другой указатель
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int a = 10;
        int b = 2;
        int *pa = &a;
        int *pb = &b;
        cout << "Variable a: address=" << pa << "\t value=" << *pa << endl;
        cout << "Variable b: address=" << pb << "\t value=" << *pb << endl;
          pa = pb;    // теперь указатель pa хранит адрес переменной b
        cout << "Variable b: address=" << pa << "\t value=" << *pa << endl;
    return 0;
}