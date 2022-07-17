//Операции с указателями
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int x = 10;
    int *p  = &x;
    *p = 45;
    cout << "x = " << x << endl;     // 45
    return 0;
}