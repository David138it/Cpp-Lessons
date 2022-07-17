// Создание двумерного массива с помощью вектора
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    vector <vector <int> > ar;
        ar.resize(10);
        for(int i=0; i<ar.size(); i++)
            ar[i].resize(10);
        for(int i=0; i<ar.size(); i++) {
            for(int j=0; j<ar[i].size(); j++)
                cout << ar[i][j] << " ";
            cout << endl;
        }
    return 0;
}