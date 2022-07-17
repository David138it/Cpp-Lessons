// Объявление вектора
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    vector <int> ar; // объявление вектора типа int
    ar.resize(3);   // выделение памяти на 3 элемента
    ar[0] = 3;
    ar[1] = 4;
    ar[2] = 5;
    for(int i=0; i<ar.size(); i++) // Проход по всем элементам вектора
        cout << ar[i] << " ";
    return 0;
}