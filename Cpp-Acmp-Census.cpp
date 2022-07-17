/*
В доме живет N жильцов. Однажды решили провести перепись всех жильцов данного дома и составили список, в котором указали возраст и пол каждого жильца. Требуется найти номер самого старшего жителя мужского пола.
Во входном файле INPUT.TXT в первой строке задано натуральное число N – количество жильцов (N ≤ 100). В последующих N строках располагается информация о всех жильцах: каждая строка содержит два целых числа: V и S – возраст и пол человека (1 ≤ V ≤ 100, S – 0 или 1). Мужскому полу соответствует значение S=1, а женскому – S=0. Выходной файл OUTPUT.TXT должен содержать номер самого старшего мужчины в списке. Если таких жильцов несколько, то следует вывести наименьший номер. Если жильцов мужского пола нет, то выведите -1.
Примеры
№    INPUT.TXT    OUTPUT.TXT
1    4
    25 1
    70 1
    100 0
    3 1        2
2    2
    25 0
    25 1        2
*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream in ("Cpp-Acmp-Census.txt");
ofstream out ("output.txt");
int main()
{
    int N, v, s, max=1, n;
    in >> N;
    for (int i=1;i<N;i++){
        in >> v >> s;
        if (s==1){
            if(v>max){
                max=v;
                n=i;

            }

        }
    }
    out << n;
    return 0;
}