// Оператор continue 
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    int result = 0;
    for (int i=0; i<10; i++)
    {
            if (i % 2 == 0) continue;
            result +=i;
        }
        cout << "result = " << result << endl; // 25
    return 0;
}