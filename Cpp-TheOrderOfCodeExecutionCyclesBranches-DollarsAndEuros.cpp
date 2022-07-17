// Доллары и евро
#include <iostream>

using namespace std;

int main()
{
    double dol, eur, num;

    dol=39.47;
    eur=53.21;
    num=1;
    while(num<=20){
        cout << num << " " << num*dol <<" " << num*eur << endl;
        num=num+1;
    }

    return 0;
}
