//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int number1 = 0, number2 = 0;
char operation;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   Form1->Edit1->Text= Form1->Edit1->Text + "1";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
       Form1->Edit1->Text= Form1->Edit1->Text + "2";        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        Form1->Edit1->Text= Form1->Edit1->Text +"3";        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
Form1->Edit1->Text= Form1->Edit1->Text +"4";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
Form1->Edit1->Text= Form1->Edit1->Text +"5";         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
Form1->Edit1->Text= Form1->Edit1->Text +"6";           
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
Form1->Edit1->Text= Form1->Edit1->Text +"7";        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
Form1->Edit1->Text= Form1->Edit1->Text +"8";        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
Form1->Edit1->Text= Form1->Edit1->Text +"9";        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
Form1->Edit1->Text= Form1->Edit1->Text +"0";        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
        if(Form1->Edit1->Text!= "") {
                number2 = Form1->Edit1->Text.ToInt();
                if(operation=='+'){
                        Form1->Edit1->Text=number1 + number2;
                }
                if(operation=='-'){
                        Form1->Edit1->Text=number1 - number2;
                }
                if(operation=='*'){
                        Form1->Edit1->Text=number1 * number2;
                }
                if(operation=='/'){
                        Form1->Edit1->Text=number1 / number2;
                }

        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        number1 = Form1->Edit1->Text.ToInt();
        Form1->Edit1->Text="";
        operation = '+';
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
number1 = Form1->Edit1->Text.ToInt();
        Form1->Edit1->Text="";
        operation = '-';        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button12Click(TObject *Sender)
{
        number1 = Form1->Edit1->Text.ToInt();
        Form1->Edit1->Text="";
        operation = '*';        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button15Click(TObject *Sender)
{
        number1 = Form1->Edit1->Text.ToInt();
        Form1->Edit1->Text="";
        operation = '/';        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button16Click(TObject *Sender)
{
        number1 = Form1->Edit1->Text.ToInt();
        Form1->Edit1->Text="";
        number1=sqrt(number1);

        Form1->Edit1->Text=number1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button17Click(TObject *Sender)
{
        number1 = number2 = 0;
        Form1->Edit1->Text= " ";
}
//---------------------------------------------------------------------------
