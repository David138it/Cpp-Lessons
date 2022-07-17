//Добавим к нему конструктор
#include <iostream>
using namespace std;
class CppStudio // имя класса
{
private: // спецификатор доступа private
    int day, // день
        month, // месяц
        year; // год
public: // спецификатор доступа public
    CppStudio(int date_day, int date_month, int date_year ) // конструктор класса
    {
        setDate(date_day, date_month, date_year); // вызов функции установки даты
    }
    void message() // функция (метод класса) выводящая сообщение на экран
    {
        cout << "\nwebsite: cppstudio.com\ntheme: Classes and Objects in C + +\n";
    }
    void setDate(int date_day, int date_month, int date_year) // установка даты в формате дд.мм.гг
    {
        day   = date_day; // инициализация день
        month = date_month; // инициализация месяц
        year  = date_year; // инициализация год
    }
    void getDate() // отобразить текущую дату
    {
        cout << "date: " << day << "." << month << "." << year << endl;
    }
}; // конец объявления класса CppStudio
 int main(int argc, char* argv[])
{
    CppStudio objCppstudio(11,11,2011); // объявление объекта и инициализация элементов данных
    objCppstudio.message(); // вызов функции message
    objCppstudio.getDate(); // отобразить дату
    return 0;
}