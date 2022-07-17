//Разыменовать указатель
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int a = 10;
    int *pa = &a;
    int *pb = pa;
    *pa = 25;
    cout << "Value on pointer pa: " << *pa << endl;  // 25
    cout << "Value on pointer pb: " << *pb << endl;  // 25
    cout << "Value of variable a: " << a << endl;    // 25
    return 0;
}