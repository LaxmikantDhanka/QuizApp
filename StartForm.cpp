//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include "QuizForm.h"

#include "StartForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::StartClick(TObject *Sender)
{
MyQuizForm->Show();
}
//---------------------------------------------------------------------------




