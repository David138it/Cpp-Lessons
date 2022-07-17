//Факториал
#include <iostream>
using namespace std;
int factorial(int y) {
    int p=1;
    for (int i=1; i<=y; i++){
        p=i*p;
    }
    return p;
}
main()
{
    for (int x=1; x<=10; x++) {
        cout << factorial(x);
        cout << endl;
    }
    return 0;
}