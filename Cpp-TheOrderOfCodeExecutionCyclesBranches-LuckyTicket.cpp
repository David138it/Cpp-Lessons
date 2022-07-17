/*
Вы пользуетесь общественным транспортом? Вероятно, вы расплачивались за проезд и получали билет с номером. Счастливым билетом называют такой билет с шестизначным номером, где сумма первых трех цифр равна сумме последних трех. Т.е. билет с номером 385916 – счастливый, т.к. 3+8+5=9+1+6. Вам требуется написать программу, которая проверяет счастливость билета.
В единственной строке входного файла INPUT.TXT записано одно целое число N (0 ≤ N < 10^6).
В выходной файл OUTPUT.TXT нужно вывести «YES», если билет с номером N счастливый и «NO» в противном случае.
Примеры
№    INPUT.TXT    OUTPUT.TXT
1    385916        YES
2    123456        NO    
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
ifstream in("Cpp-LuckyTicket.txt");
ofstream out("output.txt");
int main() {
    int a, b, c, d, e, f, g, t, r;
        in >> g;
        f=g%10;
        g=g/10;
        e=g%10;
        g=g/10;
        d=g%10;
        g=g/10;
        c=g%10;
        g=g/10;
        b=g%10;
        g=g/10;
        a=g%10;
        t=a+b+c;
        r=d+e+f;
        if (t==r){
            out << "YES";
        }
        else{
            out << "NO";
        }
    return 0;
}