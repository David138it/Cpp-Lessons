/*
Недавно на поле фермера Джона были обнаружены следы приземления летающих тарелок. Об этом даже писала газета Mew Yorc Courier.
Поле фермера Джона имеет форму круга радиусом r1. По сообщениям журналистов были обнаружены два следа от летающих тарелок, имевшие форму кругов. Один из них имел радиус r2, второй - радиус r3. Также сообщается, что они находились внутри поля фермера Джона и не пересекались, ни один из них не лежал внутри другого. При этом, они, возможно, касались друг друга и/или границы поля.
Поскольку журналисты часто склонны преувеличивать масштабы событий, необходимо написать программу, которая будет проверять, могли ли иметь место события, описанные в газете.
Входной файл INPUT.TXT содержит три целых положительных числа - r1, r2, r3 (1 ≤ r1, r2, r3 ≤ 109). В выходной файл OUTPUT.TXT выведите слово YES, если информация, опубликованная в газете, может соответствовать правде, и слово NO - иначе.
Примеры
№    INPUT.TXT    OUTPUT.TXT
1    10 10 10    NO
2    10 3 4        YES   
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
ifstream in("Cpp-ExtraterrestrialGuests.txt");
ofstream out("output.txt");
int main() {
    int r1, r2, r3, a;
        in >> r1 >> r2 >> r3;
        a=r2+r3;
        if(r1>=a){
            out << "YES";
        }
        else{
            out << "NO";
        }
    return 0;
}