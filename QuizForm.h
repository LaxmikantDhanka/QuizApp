//---------------------------------------------------------------------------

#ifndef QuizFormH
#define QuizFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMyQuizForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *QuestionLabel;
	TLabel *PointsLabel;
	TLabel *Label3;
	TRadioButton *Answer1RadioButton;
	TRadioButton *Answer2RadioButton;
	TRadioButton *Answer3RadioButton;
	TButton *ConfirmButton;
	void __fastcall Answer1RadioButtonChange(TObject *Sender);
	void __fastcall Answer2RadioButtonChange(TObject *Sender);
	void __fastcall Answer3RadioButtonChange(TObject *Sender);
	void __fastcall ConfirmButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyQuizForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyQuizForm *MyQuizForm;
//---------------------------------------------------------------------------
#endif
