//---------------------------------------------------------------------------
#include <string.h>
#include <vcl.h>
#pragma hdrstop

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
        double summa=Form1->Edit2->Text.ToDouble();
        String srok=Form1->ComboBox1->Text;
        double procent=Form1->Edit1->Text.ToDouble();
        int mesyac;
        if(srok=="3 ??????"){
                mesyac=3;
        }
        if(srok=="6 ???????"){
                mesyac=6;
        }
        if(srok=="1 ???"){
                mesyac=12;
        }
        if(srok=="2 ????"){
                mesyac=24;
        }
        if(srok=="3 ????"){
                mesyac=36;
        }
        double percent=Form1->Edit1->Text.ToDouble();
        double raschet;
        raschet=summa+summa*(mesyac*percent/12)/100;
        Form1->Label4->Caption=raschet;

}
//---------------------------------------------------------------------------


