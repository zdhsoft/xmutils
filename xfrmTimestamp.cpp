//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "xfrmTimestamp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTimestamp *frmTimestamp;
//---------------------------------------------------------------------------
__fastcall TfrmTimestamp::TfrmTimestamp(TComponent* Owner)
	: XFunctionFunForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmTimestamp::Button1Click(TObject *Sender)
{
    ShowMessage("XFrmTimestamp");
}
//---------------------------------------------------------------------------
