/*
Создать структуру TREUGOL, полями которой будут три вещественны массива по 2 элемента, задающие Х и У координаты вершин треугольника на плоскости, и одна вещественная переменная, в которой будет находиться периметр треугольника. Экземпляр структуры создать через имя структуры с использованием тега. В программе заполнить координаты числами вводимыми с клавиатуры, вычислить периметр и занести найденное значение в последнее поле структуры. Вывести на экран величину последнего поля.
*/
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{   
    float x1,x2,x3,y1,y2,y3;
        float P;
        float A,B,C;
        cout<<"Coord 1: "; cin>>x1>>y1;
        cout<<"Coord 2: "; cin>>x2>>y2;
        cout<<"Coord 3: "; cin>>x3>>y3;
        A=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        B=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
        C=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
        P=(A+B+C)/2;
        cout<<"P= "<<P<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
struct TREUGOL
{
  float coord1[2],coord2[2],coord3[2],P;
};
int main()
{
  TREUGOL T;
    cout<<"Enter X and Y for coord1"<<":"<<endl;
    cin>>T.coord1[0];
    cin>>T.coord1[1];
    cout<<T.coord1[0]<<"    "<<T.coord1[1]<<endl;

    cout<<"Enter X and Y for coord2"<<":"<<endl;
    cin>>T.coord2[0];
    cin>>T.coord2[1];
    cout<<T.coord2[0]<<"    "<<T.coord2[1]<<endl;

    cout<<"Enter X and Y for coord3"<<":"<<endl;
    cin>>T.coord3[0];
    cin>>T.coord3[1];
    cout<<T.coord3[0]<<"    "<<T.coord3[1]<<endl;
  return 0;
}*/
#include <iostream>
#include <math.h>
using namespace std;
struct TREUGOL
{
  float coord1[2],coord2[2],coord3[2],P,A,B,C;
};
int main()
{
  TREUGOL T;
    cout<<"Enter X and Y for coord1"<<":"<<endl;
    cin>>T.coord1[0];//x1
    cin>>T.coord1[1];//y1
    cout<<T.coord1[0]<<"    "<<T.coord1[1]<<endl;

    cout<<"Enter X and Y for coord2"<<":"<<endl;
    cin>>T.coord2[0];//x2
    cin>>T.coord2[1];//y2
    cout<<T.coord2[0]<<"    "<<T.coord2[1]<<endl;

    cout<<"Enter X and Y for coord3"<<":"<<endl;
    cin>>T.coord3[0];//x3
    cin>>T.coord3[1];//y3
    cout<<T.coord3[0]<<"    "<<T.coord3[1]<<endl;
    T.A=sqrt(((T.coord2[0]-T.coord1[0])*(T.coord2[0]-T.coord1[0]))+((T.coord2[1]-T.coord1[1])*(T.coord2[1]-T.coord2[1])));
    T.B=sqrt(((T.coord2[0]-T.coord3[0])*(T.coord2[0]-T.coord3[0]))+((T.coord2[1]-T.coord3[1])*(T.coord2[1]-T.coord3[1])));
    T.C=sqrt(((T.coord3[0]-T.coord1[0])*(T.coord3[0]-T.coord1[0]))+((T.coord3[1]-T.coord1[1])*(T.coord3[1]-T.coord1[1])));
    T.P=(T.A+T.B+T.C)/2;
    cout<<T.P<<endl;
  return 0;
}