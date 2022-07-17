// Числа Фибоначчи
#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
ifstream in ("Cpp-FibonacciNumbers.txt");
ofstream out ("output.txt");
int fib(int y) {
    int a=0, b=1, c=0;

    for( int i=0;i<y;i++){

        c = a+b;
        a=b;
        b=c;
    }

    return a;
}
int main()
{
    int y;
    in >> y;
    out << fib(y) << endl;
    return 0;
}
