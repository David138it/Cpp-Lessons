/*
Во входном файле буква "q", в выходном файле - "w"
*/
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");
int main()
{
    const char massive=26;
    char a[massive]={
        'q','w','e','r','t','y','u','i','o','p','a',
        's','d','f','g','h','j','k','l','z','x','c',
        'v','b','n','m'
    };
    char symbol;
    in>>symbol;
    if(symbol=='m'){
        out<<a[0];
    }
    else{
        for(int i=0; i<massive; i++){
            if(symbol==a[i]){
                out<<a[i+1];
            }

        }
    }
    return 0;
}
