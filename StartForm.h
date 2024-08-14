//---------------------------------------------------------------------------

#ifndef StartFormH
#define StartFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TRectangle *Rectangle1;
	TCircle *Circle1;
	TButton *Start;
	TEdit *Edit1;
	TLabel *Label1;
	TBindingsList *BindingsList1;
	TCheckBox *CheckBox2;
	TLinkControlToProperty *LinkControlToPropertyEnabled;
	void __fastcall StartClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
