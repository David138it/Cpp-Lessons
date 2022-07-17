//Ссылки на указатели
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int a = 10;
    int b = 6;
        int *p = 0;     // указатель
        int *&pRef = p;     // ссылка на указатель
        pRef = &a;          // через ссылку указателю p присваивается адрес переменной a
        cout << "p value=" << *p << endl;   // 10
        *pRef = 70;         // изменяем значение по адресу, на который указывает указатель
        cout << "a value=" << a << endl;    // 70
         pRef = &b;          // изменяем адрес, на который указывает указатель
        cout << "p value=" << *p << endl;   // 6
    return 0;
}