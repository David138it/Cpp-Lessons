// Factorial
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int i, n, imul=1;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
         imul=imul*i;
    }
    cout << n << "! = " << imul << endl;    
    return 0;
}
