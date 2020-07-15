//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *Menu;
	TTabSheet *TabSheet1;
	TButton *Стек;
	TButton *Дек;
	TButton *Очередь;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TButton *Push;
	TEdit *Edit1;
	TButton *Pop;
	TEdit *Edit2;
	TButton *PushLeft;
	TButton *PopLeft;
	TButton *PushRight;
	TButton *PopRight;
	void __fastcall PushClick(TObject *Sender);
	void __fastcall PopClick(TObject *Sender);
	void __fastcall СтекClick(TObject *Sender);
	void __fastcall ДекClick(TObject *Sender);
	void __fastcall ОчередьClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
