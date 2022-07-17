// Найти простые числа
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int k=10000000, sqr;
    vector <int> x;
    if(k>=2) {
            out << 2 << endl;
            x.push_back(2);
        }
    for(int j=3; j<=k; j+=2) {
            bool prime=1;
            sqr = sqrt(j);
            for(int i=0; i<x.size() && x[i] < sqr; i++)
                if (j%x[i]==0) {
                        prime=0;
                        break;
                    }

            if(prime) {
                    out << j << endl;
                    x.push_back(j);
            }
        }
    return 0;
}