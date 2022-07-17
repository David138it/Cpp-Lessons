//Операции с указателями
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int x = 10;
    int *p  = &x;
    int y = *p;
    cout << "Value = " << y << endl;    // 10
    return 0;
}