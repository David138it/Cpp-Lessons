/*
В отделе работают 3 сотрудника, которые получают заработную плату в рублях. Требуется определить: на сколько зарплата самого высокооплачиваемого из них отличается от самого низкооплачиваемого.
В единственной строке входного файла INPUT.TXT записаны размеры зарплат всех сотрудников через пробел. Каждая заработная плата – это натуральное число, не превышающее 105. В выходной файл OUTPUT.TXT необходимо вывести одно целое число — разницу между максимальной и минимальной зарплатой.
Примеры
INPUT.TXT    OUTPUT.TXT
100 500 1000    900
36 11 20    25
*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream in("Cpp-Salary.txt");
ofstream out("output.txt");
int main()
{
    int a,b,c, max, min;
    in >> a >> b >> c;
    if (a>b){
        if (a>c){
            max=a;
        }
        else{
            max=c;
        }
    }
    else {
        if(b>c){
            max=b;
        }
        else{
            max=c;
        }
    }
    if (a<b){
        if (a<c){
            min=a;
        }
        else{
            min=c;
        }
    }
    else {
        if(b<c){
            min=b;
        }
        else{
            min=c;
        }
    }
    out << max-min;    
    return 0;
}
