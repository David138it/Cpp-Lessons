//Адрес указателя
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int a = 10;
    int *pa = &a;
    cout << "address of pointer=" << &pa << endl;        // адрес указателя
    cout << "address stored in pointer=" << pa << endl;  // адрес, который хранится в указателе - адрес переменной a         
    cout << "value on pointer=" << *pa << endl;          // значение по адресу в указателе - значение переменной a
    return 0;
}