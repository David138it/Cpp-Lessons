// Методы вектора
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    vector <int> ar;
    ar.resize(3); // Изменение размера вектора
    cout << ar.size(); // Получение количества элементов вектора
    ar.push_back(5); // Добавление элемента в конец вектора
    ar.pop_back(); // Удаление последнего элемента из вектора
    ar[0] = 1; // присваивание значения элементу вектора
    ar[1] = 2;
    ar[2] = 3;
    ar.begin(); // Указатель на первый элемент
    ar.end(); // Возвращает указатель, на элемент, следующий за последним элементом вектора
    ar.erase(ar.begin()+1); // удаление второго элемента из вектора
    ar.insert(ar.begin()+1, 5); // вставка числа 5 как второго элемента вектора
    ar.reserve(100); // резервирует место на 100 элементов
    ar.capacity(); // возвращает количество зарезервированного места для вектора
    cout << endl;
    for(int i=0; i<ar.size(); i++) {
        cout << ar[i] << " ";
    }
    return 0;
}