//Динамический одномерный массив
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *ar = new int [n];


/*
    cout << endl;

    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
*/

    for(int i=0; i<n; i++){
        cin >>ar[i];
    }
    cout << endl;
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }


    delete [] ar;
    return 0;
}
