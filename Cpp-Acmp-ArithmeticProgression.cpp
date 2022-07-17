/*
Заданы первый и второй элементы арифметической прогрессии. Требуется написать программу, которая вычислит элемент прогрессии по ее номеру.
Входной файл INPUT.TXT содержит три целых числа, разделенных пробелами – первый элемент прогрессии A1 (1 ≤ A1 ≤ 1000), второй элемент прогрессии A2 (1 ≤ A2 ≤ 1000), и номер требуемого элемента N (1 ≤ N ≤ 1000). Выходной файл OUTPUT.TXT должен содержать одно целое число - N-й элемент арифметической прогрессии.
Пример
№    INPUT.TXT    OUTPUT.TXT
1    1 5 3        9  
*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream in ("Cpp-ArithmeticProgression.txt");
ofstream out ("output.txt");
int main(){
    int a1, a2, a3, progr, d, n;
    in>>a1>>a2>>n;
    d=a2-a1;
    progr=a1+d*(n-1);
    out<<progr;
    return 0;
}
