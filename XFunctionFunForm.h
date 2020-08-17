
#ifndef XFunctionFunFormH
#define XFunctionFunFormH
//---------------------------------------------------------------------------
#include <Forms.hpp>
#include <vcl.h>
class XFunctionFunForm : public TForm
{
public:
	__fastcall XFunctionFunForm(TComponent* Owner);
	virtual void __fastcall SaveChange();
};
#endif

