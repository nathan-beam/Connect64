#include "NameInputForm.h"
namespace view{

	NameInputForm::NameInputForm(){
		InitializeComponent();
		this->setText();
	}

	void NameInputForm::okButton_Click(System::Object^  sender, System::EventArgs^  e){
		this->name = this->inputBox->Text->Trim();
		 if (this->name->Length == 0){
			 this->name = this->resourceManager->GetString("DefaultName");
		 }
		 this->DialogResult = System::Windows::Forms::DialogResult::OK;
		 this->Close();

	 }

	String^ NameInputForm::getName(){
		return this->name;
	}
	void NameInputForm::setText(){
		this->resourceManager = gcnew ResourceManager("TeamHConnect64.DisplayStrings", this->GetType()->Assembly);
		this->Text = this->resourceManager->GetString("InputDialogTitle");
		this->instructionLabel->Text = this->resourceManager->GetString("InputDialogInstructionText");
		this->okButton->Text = this->resourceManager->GetString("InputDialogConfirmButton");
	}




}

