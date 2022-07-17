// пробежаться по всему массиву и через индексы обратиться к его элементам
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
        int numbers[4] = {1,2,3,4};
        int size = sizeof(numbers)/sizeof(numbers[0]); // Для нахождения длины применяется оператор sizeof
        for(int i=0; i < size; i++)
            cout << numbers[i] << endl;
    return 0;
}