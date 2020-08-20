//---------------------------------------------------------------------------

#ifndef xfrmMD5H
#define xfrmMD5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "XFunctionFunForm.h"
#include "xtype.h"
//---------------------------------------------------------------------------
class TfrmMD5 : public XFunctionFunForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TMemo *Memo1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
    template<class T>
    inline void PrintTypeSize(const char * paramTypeName)
    {
        AnsiString s;
        s.sprintf("  %s size is %d\n", paramTypeName, static_cast<zdh::XInt>(sizeof(T)));
        Memo1->Lines->Add(s);
    }
public:		// User declarations
	__fastcall TfrmMD5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMD5 *frmMD5;
//---------------------------------------------------------------------------
#endif
