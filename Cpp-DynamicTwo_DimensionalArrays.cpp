// Динамические двумерные массивы
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int n;
        cout << "Input a size of a array: ";    
    cin >> n;
    int **ar = new int *[n];
        for(int i=0; i<n; i++)  
        ar[i] = new int [n];
    for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) {
                cout << "Input a element the array [" << i << "][" << j << "] : ";
                    cin >> ar[i][j];
            }
    for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++)
                cout << ar[i][j] << " ";
            cout << endl;
        }
        for(int i=0; i<n; i++)
            delete [] ar[i];
        delete [] ar;
    return 0;
}