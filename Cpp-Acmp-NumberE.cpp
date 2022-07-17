/*
Выведите в выходной файл округленное до n знаков после десятичной точки число E. В данной задаче будем считать, что число Е в точности равно 2.7182818284590452353602875.
Входной файл INPUT.TXT содержит целое число n (0 ≤ n ≤ 25). В выходной файл OUTPUT.TXT выведите ответ на задачу.
Пример
№    INPUT.TXT    OUTPUT.TXT
1    0        3
2    25        2.7182818284590452353602875
3    13        2.7182818284590
*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream in("Cpp-Acmp-NumberE.txt");
ofstream out("output.txt");
int main()
{
    const int massive = 25;
    int b[massive] = {7,1,8,2,8,1,8,2,8,4,5,9,0,4,5,2,3,5,3,6,0,2,8,7,5};
    int a;
    in >> a;
    if (a==0){
        out << 3;
    }
    else{
        out << "2.";
        for (int i = 0; i < a; i++){
            if(i == a-1){
                if(b[i+1]>=5){
                    out << b[i]+1;
                }
                else{
                    out << b[i];
                }
            }
            else {
                out << b[i];
            }
        }
    }
    return 0;
}