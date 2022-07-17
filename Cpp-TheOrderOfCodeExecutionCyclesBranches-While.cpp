// вывести квадраты чисел от 1 до 9
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    /*int i = 1;
    while(i < 10)
    {
    cout << i << " * " << i << " = " << i * i << endl;
        i++;
    }
    return 0;*/
    int i = 0;
    while(++i < 10)
    {
    cout << i << " * " << i << " = " << i * i << endl;
        i++;
    }
    return 0;
}