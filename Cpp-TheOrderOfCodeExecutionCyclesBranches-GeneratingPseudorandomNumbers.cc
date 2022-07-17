// Генерация псевдослучайных чисел
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
       time_t now = time(NULL); // сколько секунд прошло с 01.01.1970 до текущего момента
        srand(now);
    cout << rand() << endl; // генерация и печать случайного числа от 0 до   RAND_MAX
    return 0;
}
