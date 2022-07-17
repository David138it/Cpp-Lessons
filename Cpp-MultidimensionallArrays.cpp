// Многомерные массивы
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    const int rows = 3, columns = 2;
        int numbers[rows][columns] = { {1, 2}, {3, 4}, {5, 6} };
        //1
        for(int i=0; i < rows; i++)
        {
            for(int j=0; j < columns; j++)
            {
                    cout << numbers[i] [j] << "\t";
            }
            cout << endl;
        }
        //2
        /*for(auto &subnumbers : numbers){
            for(int number : subnumbers){
                    cout << number << "\t";
            }
            cout << std::endl;
        }*/
    return 0;
}
