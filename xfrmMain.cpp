//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "xfrmMain.h"
#include "xfrmTimestamp.h"
#include "xfrmMD5.h"
#include <map>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
	: TForm(Owner)
{
    frmTimestamp = new TfrmTimestamp(PanelLayout);
    frmTimestamp->Parent = PanelLayout;

    frmMD5 = new TfrmMD5(PanelLayout);
    frmMD5->Parent = PanelLayout;

    m_SubFormList.push_back(frmTimestamp);
    m_SubFormList.push_back(frmMD5);

    ShowLocalForm(frmTimestamp, ActionTimeStamp);

//    frmTaskTreeEditer = new TfrmTaskTreeEditer(PanelContainer);
//    frmTaskTreeEditer->Parent = this->PanelContainer;
}
//---------------------------------------------------------------------------





void __fastcall TfrmMain::ShowLocalForm(XFunctionFunForm * paramForm,TAction * paramAction)
{
	for(TSubFormList::iterator iter = this->m_SubFormList.begin(); iter != m_SubFormList.end(); ++iter)
	{
		if (*iter != paramForm)
		{
			(*iter)->Hide();
		}
		if (paramForm != NULL)
		{
			paramForm->Show();
		}
	}
	m_CurrActiveForm = paramForm;
	for(int i = 0; i < ActionList1->ActionCount; i++)
	{
		TAction * pAction = dynamic_cast<TAction *>(ActionList1->Actions[i]);
		if (pAction == NULL) continue;
		pAction->Checked = false;
	}
	if (paramAction != NULL) paramAction->Checked = true;
}
void __fastcall TfrmMain::ActionMD5Execute(TObject *Sender)
{
    //
    ShowLocalForm(frmMD5, ActionMD5);
}
//---------------------------------------------------------------------------

void __fastcall TfrmMain::ActionTimeStampExecute(TObject *Sender)
{
	ShowLocalForm(frmTimestamp, ActionTimeStamp);
}
//---------------------------------------------------------------------------

