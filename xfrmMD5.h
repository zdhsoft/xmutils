//---------------------------------------------------------------------------

#ifndef xfrmMD5H
#define xfrmMD5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "XFunctionFunForm.h"
//---------------------------------------------------------------------------
class TfrmMD5 : public XFunctionFunForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmMD5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMD5 *frmMD5;
//---------------------------------------------------------------------------
#endif
