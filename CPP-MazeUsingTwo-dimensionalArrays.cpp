// Лабиринт с помощью двумерных массивов
#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    int mas[33][20] = {
                        {1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,}, 
                        {1,2,1,0,0,1,0,1,2,2,2,1,1,1,1,0,0,0,0,1,},
                        {1,2,1,1,0,1,0,1,2,1,2,2,2,2,1,0,1,1,0,1,},
                        {1,2,2,2,2,2,2,1,2,1,1,1,1,2,1,0,0,1,0,1,},
                        {1,1,1,1,1,1,2,1,2,1,0,0,1,2,1,1,0,1,0,1,},
                        {1,0,0,1,0,0,2,2,2,1,1,0,0,2,0,0,0,1,0,1,},
                        {1,0,1,1,0,1,1,1,1,1,0,0,1,2,1,1,1,1,0,1,},
                        {1,0,0,0,0,0,0,0,0,1,1,1,1,2,1,0,0,0,0,1,},
                        {1,1,1,1,1,1,0,1,1,1,2,2,2,2,1,0,1,1,1,1,},
                        {1,1,0,0,0,1,0,0,1,1,2,1,1,1,1,0,0,0,0,1,},
                        {1,0,0,1,0,0,0,0,0,1,2,2,2,2,1,1,1,1,0,1,},
                        {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,0,0,0,0,1,},
                        {1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,0,1,1,1,1,},
                        {1,2,1,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,},
                        {1,2,1,0,0,0,1,2,2,2,1,0,0,0,0,0,1,1,0,1,},
                        {1,2,1,1,1,1,1,2,1,2,1,1,1,0,1,0,0,0,0,1,},
                        {1,2,1,2,2,2,1,2,1,2,2,2,1,1,1,1,1,1,1,1,},
                        {1,2,1,2,1,2,1,2,1,0,1,2,2,2,2,2,2,2,2,1,},
                        {1,2,1,2,1,2,1,2,1,0,1,1,1,1,1,1,1,1,2,1,},
                        {1,2,1,2,1,2,1,2,1,0,0,0,0,0,0,0,0,0,2,1,},
                        {1,2,1,2,1,2,2,2,1,0,1,1,1,1,1,1,0,1,2,1,},
                        {1,2,1,2,1,1,1,1,1,0,0,0,1,0,1,0,0,1,2,1,},
                        {1,2,1,2,2,1,0,0,1,1,1,0,0,0,1,0,1,1,2,1,},
                        {1,2,1,1,2,1,1,0,0,0,0,0,1,0,1,0,0,1,2,1,},
                        {1,2,1,1,2,1,0,0,1,1,1,1,1,1,1,1,1,1,2,1,},
                        {1,2,1,1,2,1,1,0,1,2,2,2,2,2,2,2,2,2,2,1,},
                        {1,2,1,1,2,1,0,0,1,2,1,1,1,1,1,1,1,1,1,1,},
                        {1,2,1,1,2,1,0,1,1,2,1,1,1,1,1,1,1,1,2,2,},
                        {1,2,1,1,2,1,0,0,1,2,1,1,2,2,2,2,2,2,2,1,},
                        {1,2,1,1,2,1,0,1,1,2,1,1,2,1,1,1,1,1,1,1,},
                        {1,2,1,1,2,1,0,0,1,2,1,1,2,1,0,0,0,1,0,1,},
                        {1,2,2,2,2,1,0,1,1,2,2,2,2,0,0,1,0,0,0,1,},
                        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,}
    };
    for (int i = 0; i < 33; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (mas[i][j] == 1)
            {
                cout <<"j";
                cout <<"j";
            } else{
                 cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}