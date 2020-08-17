//---------------------------------------------------------------------------

#ifndef xfrmMainH
#define xfrmMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <vector>
#include "XFunctionFunForm.h"

typedef std::vector<TForm *> TSubFormList;
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TToolBar *ToolBar1;
	TImageList *ImageList1;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TStatusBar *StatusBar1;
	TActionList *ActionList1;
	TPanel *PanelLayout;
	TAction *ActionMD5;
	TAction *ActionTimeStamp;
	void __fastcall ActionMD5Execute(TObject *Sender);
	void __fastcall ActionTimeStampExecute(TObject *Sender);
private:	// User declarations
	TSubFormList m_SubFormList;
	XFunctionFunForm * m_CurrActiveForm;
    void __fastcall ShowLocalForm(XFunctionFunForm * paramForm,TAction * paramAction);
public:		// User declarations
	__fastcall TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
