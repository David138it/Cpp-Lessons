//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        /*
        Все основные события в проектируемом приложении будут разворачи-ваться при нажатии на кнопку START на форме. В связи с этим необходимо перейти к редактированию кода программы в теле функции0бработчика соответствующего события. Делать это мы уже умеем. Итак, далее мы будем последовательно описывать выражение, которые нужно вписать в текс тела функции.
        Для начала нам понадобятся две переменные целого типа. Перемен-ная i, в основном, будет служить счетчиком циклов. Переменная step будет задавать шаг изменения горизонтальной координаты узла (аргумента функций синуса и косинуса). Производится обычное объявление локаль-ных переменных.
        */
        int i, step;
        /*
        Значение переменной step введем из поля редактировыния Edit. Делается это следующим образом.
        Конструкция Edit1->Text представляет собой строку символов, находя-щуюся в поле редактирования. В нашем случае изначально это строка “50”. Функция StrToInt, как это следует из ее названия, производит пре-образование строки в целое. Возвращаемое значение – целая константна, равная 50. Эта величина и присваивается переменной step. Если пользова-тель введет в поле редактирования другое значение, то оно станет акту-альным для переменной step после очередного нажатия на кнопку START
        */
        step=StrToInt(Edit1->Text);
        /*
        Область рисования PaintBox имеет инструмент Canvas – канва или холст для рисования. Именно этот инструмент располагает рядом свойств и ме-тодов, позволяющих выполнять все необходимые нам действия. Синтаксис обращений к методам и свойствам будут понятен из следующих фрагмен-тов текста.
        Сейчас нам необходимо установить стиль рисования линий. Исходно это должен быть стиль сплошной линии.
        Здесь мы обращаемся к компоненту PaintBox, к его инструменту Canvas, к его свойству Pen (перо, карандаш) и к его свойству Style. Короче говоря, переменной Style присваивается значение psSolid, а это и есть стиль сплошной линии. Вообще говоря, стиль psSolid устанавливается по умол-чанию, однако мы задаем его в явном виде, поскольку далее в программе мы стиль изменим, но исходные установки должны устанавливаться каж-дый раз при нажатии кнопки START.
        */
        PaintBox1->Canvas->Pen->Style=psSolid;
        /*
        Установим размер шрифта отображения символов на PaintBox равным 8. Заметим, что все размеры и единицы длины выражаются в пикселях - ко-личествах точек.
        */
        PaintBox1->Canvas->Font->Size=8;
        /*
        Инструмент Brush (кисть) позволяет закрашивать замкнутые или выделен-ные области PaintBox заданным цветом, который устанавливается в свой-стве Color. Зададим это цвет белым с использованием следующего выра-жения.
        */
        PaintBox1->Canvas->Brush->Color=clWhite;
        /*
        Теперь «зальем белой краской» все поле рисования.
        Функция FillRect закрашивает прямоугольник. Прямоугольник, в свою очередь, определяется функцией Rect с четырьмя аргументами, определя-ющими левый верхний и правый нижний углы прямоугольника. Послед-ние два значения определяются свойствами Width и Height компонента PaintBox. Здесь крайне важно знать, что система координат в поле рисо-вания «перевернута». Начало координат (точка x=0, y=0) находится в ле-вом верхнем углу, ось X направлена слева направо, а ось Y направлена сверху вниз/
        */
        PaintBox1->Canvas->FillRect(Rect(0,0,PaintBox1->Width,PaintBox1->Height));
        /*
        Теперь нарисуем на холсте оси координат. Для проведения отрезков пря-мых линий мы можем воспользоваться двумя функциями: MoveTo и LineTo. Первая устанавливает перо (карандаш) в точку, координатами ко-торой являются два аргумента функции X и Y. Координаты приводятся к типу целых чисел. Вторая функция рисует прямую, исходящую из текущей точки в точку, заданную аргументами функции. Прорисовка вертикальной м горизонтальной оси выполняется следующим четырьмя выражениями.
        Сначала перо устанавливается в точку с координатами 20,20, то есть с отступом в 20 пикселей вправо от левой границы холста и 20 пикселей вниз от верхней границы – помним о перевернутой системе координат! Далее проводится вертикально вниз прямая длиной 300 пикселей. Гори-зонтальная ось проводится на уровне 170 пикселей. Длина горизонтальной оси равна 1030 пикселей. Таким образом значение 0 для отображаемых далее функций синуса и косинуса будет соответствовать горизонтальному уровню 170 на холсте.
        */
        PaintBox1->Canvas->MoveTo(20,20);
        PaintBox1->Canvas->LineTo(20,320);
        PaintBox1->Canvas->MoveTo(20,170);
        PaintBox1->Canvas->LineTo(1050,170);
        /*
        Расставим небольшие вертикальные штрихи по оси Y, отмечающие значе-ния некоторых опорных точек на этой оси. Иными словами, разметим вер-тикальную ось, поставив штрихи на расстоянии 100, 200, … 1000 пикселей от начала координат. Делается это с помощью цикла.
        */
        for(i=120; i<=1020; i+=100)
        {
                PaintBox1->Canvas->MoveTo(i,170);
                PaintBox1->Canvas->LineTo(i,160);
        }
        /*
        Разметим вертикальную ось. Здесь достаточно изобразить два небольших горизонтальных штриха около оси Y на уровнях в 100 пикселей выше и 100 пикселей ниже начала координат. Для этого запишем в программе следующие 4 выражения.
        */
        PaintBox1->Canvas->MoveTo(20,70);
        PaintBox1->Canvas->LineTo(30,70);
        PaintBox1->Canvas->MoveTo(20,270);
        PaintBox1->Canvas->LineTo(30,270);
        /*
        Напротив только что прорисованных двух штрихов и немного левее вер-тикальной оси выставим числовые значения 1 и -1. Это будут отмасштаби-рованные значения изображаемых тригонометрических функций. Для ри-сования этих значений воспользуемся функцией TextOutA отображения текста на холсте. Функция имеет три аргумента. Первые два – координаты левого верхнего угла области, в которой отобразится текст. Последним аргументом должна быть строка символов. Если в качестве выводимого текста фигурирует целое число, то оно само заменяет эту строку, но это скорее исключение, чем правило. Так, если бы была необходимость отоб-разить в виде текста вещественное число с десятичной точкой, то потребо-валось бы преобразование числа в строку типа FloatToStr(6.75). Ну, а в нашем случае достаточно применить следующие выражения.
        */
        PaintBox1->Canvas->TextOutA(8,62,1);
        PaintBox1->Canvas->TextOutA(4,262,-1);
        /*
        Теперь проставим числовые значения около штрихов на горизонтальной оси.
        Нетрудно понять, что под указанными штрихами отображаются цифры 1, 3, … 9. Это – отмасштабированные значения аргумента рисуемых триго-нометрических функций. Внимательно посмотрите на последний фрагмент и разберитесь в том, что здесь абсолютно необходимо применить целочис-ленное деление i/100.
        */
        for(i=120; i<=920; i+=200)
                PaintBox1->Canvas->TextOutA(i-2,175,i/100);
        /*
        Приступаем к рисованию графика функции y=sin(x). Мы предполагаем, что аргумент функции будет меняться от 0 до 10. Сопоставим этому изме-нению аргумента изменение номера пикселя вдоль горизонтальной оси от 0 до 1000. Для этого меняем переменную i от 20 до 1020 с учетом того, что начало координат смещено на 20 пикселей от края канвы. В соответствие с этим аргумент функции должен вычисляться через i по формуле x=(i-20)/100.0. деление здесь должно быть именно вещественным, а не целочис-ленным.  
        Прежде всего, поскольку sin(0) равен нулю, необходимо установить перо в начало координат – в точку с координатами 20,170. Дальнейшее рисование производится в цикле с увеличением i  на величину шага step.
        Вертикальная координата очередной точки задается выражением 170-sin((i-20)/100.)*100. Во-первых, отсчитывать ее надо от оси Y, то есть от уровня 170. Во-вторых, значение синуса надо вычитать из 170, поскольку система координат перевернута. И, в-третьих, значение синуса умножается на 100 для масштабирования по вертикальной оси.
        */
        PaintBox1->Canvas->MoveTo(20,170);
        for(i=20+step; i<=1020; i+=step)
                PaintBox1->Canvas->LineTo(i,170-sin((i-20)/100.)*100);
        /*
        Прежде чем рисовать график второй функции – косинуса, изменим стиль линии  со сплошного на штриховой. Установку стиля мы уже умеем де-лать, а название штрихового стиля будет psDash. Следовательно, далее в программе должна быть строка:
        */
        PaintBox1->Canvas->Pen->Style=psDash;
        /*
        Функция cos(0), как известно, имеет значение 1. Тогда перед рисованием графика необходимо переместить перо в точку с координатами 20,70.
        */
        PaintBox1->Canvas->MoveTo(20,70);
        /*
        далее будет выполняться рисование в цикле.
        */
        for(i=20+step; i<=1020; i+=step)
                PaintBox1->Canvas->LineTo(i,170-cos((i-20)/100.)*100);
        /*
        Последнее, что нужно отобразить на холсте, это некая подпись к рисунку. Пусть это будет строка ----------- - SIN, - - - - -  - COS, но с увеличенным до 20 размером символов. Установим нужный размер.
        */
        PaintBox1->Canvas->Font->Size=20;
        /*
        Снова используем инструмент вывода текста в нужное место холста.
        */
        PaintBox1->Canvas->TextOutA(400,280,"----------- - SIN, - - - - -  - COS");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        /*
        Кнопку FINISH мы организовали для закрытия программы (хотя это мож-но делать, разумеется, и стандартным закрытием окна программы. Пол-ный выход из программы осуществляется в С++ функцией Close().
        */
        Close();
}
//---------------------------------------------------------------------------