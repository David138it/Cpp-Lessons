#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    int min, mid, max;
    cin >> a >> b >> c;
    max = a;
    if (b > a){
        max = b;
        min = a;
    }
    else{
        min = b;
    }
    if (c >= max){
        mid = max;
        max = c;
    }
    else if (c >= min){
        mid = c;
    }
    else{
        mid = min;
        min = c;
    }
    cout << min << " " << mid << " " << max;
    return 0;
}
