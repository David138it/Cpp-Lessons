/*
Требуется написать программу, определяющую, является ли четырехзначное натуральное число N палиндромом, т.е. числом, которое одинаково читается слева направо и справа налево.
Входной файл INPUT.TXT содержит натуральное число N (1000 ≤ N ≤ 9999). В выходной файл OUTPUT.TXT следует вывести слово «YES», если число N является палиндромом, или «NO» – если нет.
Примеры
№    INPUT.TXT    OUTPUT.TXT
1    6116        YES
2    1231        NO
*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream in ("Cpp-Four_DigitPalindrome.txt");
ofstream out ("output.txt");
int main()
{
    int a, b, c, d, e;
    in >> a;
    b = a % 10;
    a = a / 10;
    c = a % 10;
    a = a / 10;
    d = a % 10;
    a = a / 10;
    e = a % 10;
    if (b==e){
        if (d==c){
            out << "YES";
        }
        else {

            out << "NO";

        }
    }
    else {

        out << "NO";

    }

    return 0;
}
