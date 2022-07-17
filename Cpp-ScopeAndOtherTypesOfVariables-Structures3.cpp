/*Cоздадим структуру, создадим объект структуры, заполним значениями элементы структуры (данные об объекте) и выведем эти значения на экран.*/
#include <iostream>
using namespace std;
struct building     //Создаем структуру!
{                  
    char *owner;       //здесь будет храниться имя владельца
    char *city;        //название города
    int amountRooms;   //количество комнат
    float price;       //цена
/*Первый способ:};                 
int main()
{
        building apartment1;   //это объект структуры с типом данных, именем структуры, building
        apartment1.owner = "Денис"; //заполняем данные о владельце и т.д.
        apartment1.city = "Симферополь";      
        apartment1.amountRooms = 5;
        apartment1.price = 150000;
        cout << "Владелец квартиры: " << apartment1.owner << endl;
        cout << "Квартира находится в городе: " << apartment1.city << endl;
        cout << "Количество комнат: " << apartment1.amountRooms << endl;
        cout << "Стоимость: " << apartment1.price << " $" << endl;
    return 0;
}Второй способ:*/
}apartment1;                 
int main()
{
        apartment1.owner = "Денис"; //заполняем данные о владельце и т.д.
        apartment1.city = "Симферополь";      
        apartment1.amountRooms = 5;
        apartment1.price = 150000;
        cout << "Владелец квартиры: " << apartment1.owner << endl;
        cout << "Квартира находится в городе: " << apartment1.city << endl;
        cout << "Количество комнат: " << apartment1.amountRooms << endl;
        cout << "Стоимость: " << apartment1.price << " $" << endl;
    return 0;
}