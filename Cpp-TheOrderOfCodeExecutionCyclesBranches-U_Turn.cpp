/*
Дано натуральное число N и последовательность из N элементов. Требуется вывести эту последовательность в обратном порядке.
В первой строке входного файла INPUT.TXT записано натуральное число N (N ≤ 103). Во второй строке через пробел идут N целых чисел, по модулю не превосходящих 103 - элементы последовательности. В выходной файл OUTPUT.TXT выведите заданную последовательность в обратном порядке.
Пример
№    INPUT.TXT    OUTPUT.TXT
1    3
    1 2 3        3 2 1
*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream in("Cpp-U_Turn.txt");
ofstream out("output.txt");
int main()
{
    int a;
    in >> a;
    int *b =new int [a];
    for(int i=0; i<a; i++){
        in >> b[i];
    }
    for(int i=0;i<a;i++){
        out << b[i] << " ";
    }
    delete [] b;
    return 0;
}