//Операции с указателями
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int a=5, b=7;
        int *aUk = &a;
    cout << aUk << " " << *aUk << endl;
    aUk = &b;
    cout << aUk << " " << *aUk << endl;
    return 0;
}