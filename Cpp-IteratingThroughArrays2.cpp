// Использовать форму цикла для перебора массива
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int numbers[4] = {1,2,3,4};
        for(int number : numbers)
            cout << number << endl;
    return 0;
}