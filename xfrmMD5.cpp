//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "xfrmMD5.h"
// #include "xconfig.h"
#include "xtype.h"
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
        String s = "";
        #ifdef CONFIG_BCB
               s += "CONFIG_BCB,";
        #endif
        #ifdef _DEBUG
                s+= "_DEBUG,";
        #endif
        #ifdef __BORLANDC__
                s+= " __BORLANDC__=";
                s+= __BORLANDC__;
        #endif


        PrintTypeSize<zdh::XByte>("XByte");
        PrintTypeSize<zdh::XChar>("XChar");
        PrintTypeSize<zdh::XWord>("XWord");
        PrintTypeSize<zdh::XShort>("XShort");
        PrintTypeSize<zdh::XWideChar>("XWideChar");
        PrintTypeSize<zdh::XDWord>("XDWord");
        PrintTypeSize<zdh::XInt>("XInt");
        PrintTypeSize<zdh::XDDWord>("XDDWord");
        PrintTypeSize<zdh::XLong>("XLong");
        PrintTypeSize<zdh::XBool>("XBool");
        PrintTypeSize<zdh::XFloat>("XFloat");
        PrintTypeSize<zdh::XDouble>("XDouble");

        PrintTypeSize<zdh::Pointer>("Pointer");
        PrintTypeSize<zdh::PByte>("PByte");
        PrintTypeSize<zdh::PChar>("PChar");
        PrintTypeSize<zdh::PWord>("PWord");
        PrintTypeSize<zdh::PShort>("PShort");
        PrintTypeSize<zdh::PInt>("PInt");
        PrintTypeSize<zdh::PDWord>("PDWord");
        PrintTypeSize<zdh::PLong>("PLong");
        PrintTypeSize<zdh::PDDWord>("PDDWord");
        PrintTypeSize<zdh::PWideChar>("PWideChar");
        PrintTypeSize<zdh::PBool>("PBool");
        PrintTypeSize<zdh::PFloat>("PFloat");
        PrintTypeSize<zdh::PDouble>("PDouble");

	ShowMessage("TfrmMD5:" + s);
}
//---------------------------------------------------------------------------
  /*
    template<class T>
    inline void PrintTypeSize(const char * paramTypeName)
    {
        printf("  %s size is %d\n", paramTypeName, static_cast<XInt>(sizeof(T)));
    }
    inline void PrintSizeOf()
    {
        printf("print type size:\n");
        PrintTypeSize<XByte>("XByte");
        PrintTypeSize<XChar>("XChar");
        PrintTypeSize<XWord>("XWord");
        PrintTypeSize<XShort>("XShort");
        PrintTypeSize<XWideChar>("XWideChar");
        PrintTypeSize<XDWord>("XDWord");
        PrintTypeSize<XInt>("XInt");
        PrintTypeSize<XDDWord>("XDDWord");
        PrintTypeSize<XLong>("XLong");
        PrintTypeSize<XBool>("XBool");
        PrintTypeSize<XFloat>("XFloat");
        PrintTypeSize<XDouble>("XDouble");

        PrintTypeSize<Pointer>("Pointer");
        PrintTypeSize<PByte>("PByte");
        PrintTypeSize<PChar>("PChar");
        PrintTypeSize<PWord>("PWord");
        PrintTypeSize<PShort>("PShort");
        PrintTypeSize<PInt>("PInt");
        PrintTypeSize<PDWord>("PDWord");
        PrintTypeSize<PLong>("PLong");
        PrintTypeSize<PDDWord>("PDDWord");
        PrintTypeSize<PWideChar>("PWideChar");
        PrintTypeSize<PBool>("PBool");
        PrintTypeSize<PFloat>("PFloat");
        PrintTypeSize<PDouble>("PDouble");
    }     */
