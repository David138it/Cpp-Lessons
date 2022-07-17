//---------------------------------------------------------------------------
#include <time.h>
#include <fstream.h>
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
        ifstream in ("IRKL1119.txt");
        ofstream out ("output.txt");
        int q;
        in >>  q;



        srand(time(NULL));
        
        int *massive=new int [5000];
        massive[0] = (abs(rand()*rand()))%10000000+20000000;

        for( int i=1; i<5000; i++){
                massive[i]=(abs(rand()*rand()))%40000-20000+massive[i-1];//poluchili chislo ot-20do20
                Series1->Add(massive[i],clBlue);
                out << massive[i] << endl;
        }
        int *massive2=new int[5000];
        massive2[0] = (abs(rand()*rand()))%10000000+20000000;

        for( int i=1; i<5000; i++){
                massive2[i]=(abs(rand()*rand()))%40000-20000+massive2[i-1];//poluchili chislo ot-20do20
                Series2->Add(massive2[i],clBlue);

        }
        int *massive3=new int[5000];
        String a = " ";

        for(int i=1; i<5000; i++){

                massive3[i]=massive2[i]-massive[i];
                //Form1->Memo1->Lines->Add(massive[i] + " " + massive2[i] + " " + massive3[i]);
                Form1->Memo1->Lines->Add(a+ massive[i] + " " + massive2[i] + " " + massive3[i]);
                Series3->Add(massive3[i],clBlue);

                out << massive[i] << massive2[i] << massive3[i] << endl;
        }
}
//---------------------------------------------------------------------------
 