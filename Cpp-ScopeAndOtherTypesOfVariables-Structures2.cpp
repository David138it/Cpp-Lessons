/*Oпределим простейшую структуру*/
#include <iostream>
#include <string>
using namespace std;
struct user
{
    public:
        user(string n, int a)
        {
            name=n;
            age=a;
        }
        void move()
        {
            cout<<name<<" is moving "<<endl;
        }
        void setAge(int a)
        {
            if(a>0 && a<100)
            {
                age=a;
            }
        }
        string getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
    private:
            int age;
            string name;
};
int main()
{
    user tom("Tom",22);
    cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << endl;
    tom.setAge(31);
    cout << "Name: " << tom.getName() << "\tAge: " << tom.getAge() << endl;
    return 0;
}