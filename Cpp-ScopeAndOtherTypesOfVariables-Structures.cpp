/*Oпределим простейшую структуру*/
#include <iostream>
#include <string>
using namespace std;
struct person
{
    int age;
    string name;
};
int main()
{
    person tom;
    tom.name = "Tom";
    tom.age = 34;
    cout << "Name: " << tom.name << "\tAge: " << tom.age << endl;
    return 0;
}