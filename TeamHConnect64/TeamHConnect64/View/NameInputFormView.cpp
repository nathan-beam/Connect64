#include "NameInputForm.h"
namespace view{

	NameInputForm::~NameInputForm(){
		if (components)
		{
			delete components;
		}
	}

	void NameInputForm::InitializeComponent(void)
		{
			this->instructionLabel = (gcnew System::Windows::Forms::Label());
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// instructionLabel
			// 
			this->instructionLabel->AutoSize = true;
			this->instructionLabel->Location = System::Drawing::Point(43, 23);
			this->instructionLabel->Name = L"instructionLabel";
			this->instructionLabel->Size = System::Drawing::Size(0, 13);
			this->instructionLabel->TabIndex = 0;
			this->instructionLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// inputBox
			// 
			this->inputBox->Location = System::Drawing::Point(16, 61);
			this->inputBox->Name = L"inputBox";
			this->inputBox->Size = System::Drawing::Size(256, 20);
			this->inputBox->TabIndex = 1;
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(104, 87);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(75, 23);
			this->okButton->TabIndex = 2;
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &NameInputForm::okButton_Click);
			// 
			// NameInputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 125);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->inputBox);
			this->Controls->Add(this->instructionLabel);
			this->Name = L"NameInputForm";
			this->ResumeLayout(false);
			this->PerformLayout();

	}
}