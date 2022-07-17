// Создать массив с произвольными значениями, написать программу вычисления минимального и максимального элемента массива
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    const int arraysize = 12;
    int a [arraysize] = {18, 30, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int min=a[0], max=a[0];
    for (int i = 1; i < arraysize; i++){
            if (a[i]>max){
                max=a[i];
            }
            if (a[i]<min){
                min=a[i];
            }
        }
    cout << "max=" << max << endl;
    cout << "min=" << min << endl;
    return 0;
}