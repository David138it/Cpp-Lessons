/*
Pассмотрим функцию areaRectangle(), которая вычисляет площадь прямоугольника. И создадим еще одну функцию, предполагая, что наши исходные данные (стороны прямоугольника) заданы в метрах и сантиметрах, например такие: a = 2м 35 см; b = 1м 86 см
*/
#include <iostream>
using namespace std;
// прототипы перегруженных функций
/*float areaRectangle(float a, float b);
float areaRectangle(float a_m, float a_sm, float b_m, float b_sm);*/
// перегруженная функция 1
float areaRectangle(float a, float b) //функция, вычисляющая площадь прямоугольника с двумя параметрами a(см) и b(см)
{
return a * b; // умножаем длинны сторон прямоугольника и возвращаем полученное произведение
}
// перегруженная функция 2
float areaRectangle(float a_m, float a_sm, float b_m, float b_sm) // функция, вычисляющая площадь прямоугольника с 4-мя параметрами a(м) a(см); b(м) b(cм)
{
  return (a_m * 100 + a_sm) * (b_m * 100 + b_sm);
}
int main()
{
    cout << "S1 = " << areaRectangle(32,43) << endl; // вызов перегруженной функции 1
    cout << "S2 = " << areaRectangle(4, 43, 2, 12) << endl; // вызов перегруженной функции 2
    return 0;
}