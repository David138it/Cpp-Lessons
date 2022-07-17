//Tребуется присвоить указателю одного типа значение указателя другого типа
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    char c = 'N';
        char *pc = &c;
        int *pd = (int *)pc;
        void *pv = (void*)pc;
        cout << "pv=" << pv << endl;
        cout << "pd=" << pd << endl;
    cout << "pc=" << pc << endl;
    return 0;
}