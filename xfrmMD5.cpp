//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "xfrmMD5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMD5 *frmMD5;
//---------------------------------------------------------------------------
__fastcall TfrmMD5::TfrmMD5(TComponent* Owner)
	: XFunctionFunForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMD5::Button1Click(TObject *Sender)
{
	ShowMessage("TfrmMD5");
}
//---------------------------------------------------------------------------
