/*Разработаем программу, в которой объявим простейший класс, в котором будет объявлена одна функция, печатающая сообщение.*/
#include <iostream>
using namespace std;
// начало объявления класса
class CppStudio // имя класса
{
public: // спецификатор доступа
    void message() // функция (метод класса) выводящая сообщение на экран
    {
        cout << "website: cppstudio.com\ntheme: Classes and Objects in C + +\n";
    }
}; // конец объявления класса CppStudio
int main(int argc, char* argv[])
{
    CppStudio objMessage; // объявление объекта
    objMessage.message(); // вызов функции класса message
    system("pause");
    return 0;
}
