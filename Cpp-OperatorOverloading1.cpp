/*
Пример с классом Counter, который представляет секундомер и хранит количество секунд
*/
#include <iostream>
using namespace std;
class Counter{
public:
    Counter(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        cout << seconds << " seconds" << endl;
    }
    int seconds;
};
Counter operator + (Counter c1, Counter c2){
    return Counter(c1.seconds + c2.seconds);
}
int main(){
    Counter c1(20);
    Counter c2(10);
    Counter c3 = c1 + c2;
    c3.display();   // 30 seconds
    return 0;
}