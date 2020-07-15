//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TEdit *value[20];
int i;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PushClick(TObject *Sender)
{

 if (i<0) i=0;
 if (i<15)
 {

  value[i]=new TEdit(Form1);
  value[i]->Parent=Menu->ActivePage;
  value[i]->Text=Edit1->Text;
  value[i]->Font->Size=12;
  value[i]->Width=60;
  value[i]->Height=32;
  value[i]->Top=100;
  value[i]->Left=30;
  for(int j=i-1;j>=0;j--)
  {
   value[j]->Left+=70;
  }
  ++i;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PopClick(TObject *Sender)
{

 if (i>0)
 {
  value[i-1]->Free();
  Menu->Refresh();
  for(int j=i-2;j>=0;j--)
   value[j]->Left-=70;
  --i;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ÑòåêClick(TObject *Sender)
{

 Menu->ActivePageIndex=1;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ÄåêClick(TObject *Sender)
{
  Menu->ActivePageIndex=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Î÷åðåäüClick(TObject *Sender)
{
  Menu->ActivePageIndex=3;
}
//---------------------------------------------------------------------------

