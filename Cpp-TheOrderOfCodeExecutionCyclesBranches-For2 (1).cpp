// вывести квадраты чисел от 1 до 9
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    for (int i=1; i < 10; i++)
        {
            for(int j = 1; j < 10; j++)
            {
                cout << i * j << "\t";
            }
            cout << endl;
        }
    return 0;
}