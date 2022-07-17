//Операции с указателями
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int x = 10;
    int *p;
    p = &x;
    cout << "Address = " << p << endl;
    cout << "Value = " << *p << endl;
    return 0;
}