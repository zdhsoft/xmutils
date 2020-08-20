//---------------------------------------------------------------------------

#ifndef xfrmTimestampH
#define xfrmTimestampH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
#include "XFunctionFunForm.h"
//---------------------------------------------------------------------------
class TfrmTimestamp : public XFunctionFunForm
{
__published:	// IDE-managed Components
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TfrmTimestamp(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTimestamp *frmTimestamp;
//---------------------------------------------------------------------------
#endif
