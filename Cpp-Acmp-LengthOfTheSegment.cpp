/*
Отрезок задан координатами своих концевых точек. Требуется вычислить длину этого отрезка.
Входной файл INPUT.TXT содержит координаты концов отрезка в формате X1 Y1 X2 Y2 . Все координаты – целые числа, не превышающие 1000 по абсолютной величине. В выходной файл OUTPUT.TXT выведите длину отрезка с точностью 10-5.
Пример
№    INPUT.TXT    OUTPUT.TXT
1    3 4 8 4        5
*/
#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
ifstream in ("Cpp-LengthOfTheSegment.txt");
ofstream out ("output.txt");
double rasstoianie(double x1, double y1, double x2, double y2) {
    double d;
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    return d;
}

int main()
{
    double x1, y1, x2, y2;
    in >> x1>> y1 >> x2 >> y2;
    out << fixed <<rasstoianie(x1, y1, x2, y2)<< endl;

    return 0;
}

