#pragma once

namespace Connect64 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Connect64Form : public System::Windows::Forms::Form
	{
	public:
		Connect64Form(void);
		

	protected:
		~Connect64Form();

	private: ResourceManager^ resourceManager;
	private: System::Windows::Forms::ComboBox^  NumbersCombo;

	private: System::Windows::Forms::Label^  Numberlbl;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NumbersCombo = (gcnew System::Windows::Forms::ComboBox());
			this->Numberlbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// NumbersCombo
			// 
			this->NumbersCombo->FormattingEnabled = true;
			this->NumbersCombo->Items->AddRange(gcnew cli::array< System::Object^  >(64) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62",
					L"63", L"64"
			});
			this->NumbersCombo->Location = System::Drawing::Point(481, 34);
			this->NumbersCombo->Name = L"NumbersCombo";
			this->NumbersCombo->Size = System::Drawing::Size(52, 28);
			this->NumbersCombo->TabIndex = 0;
			// 
			// Numberlbl
			// 
			this->Numberlbl->AutoSize = true;
			this->Numberlbl->Location = System::Drawing::Point(143, 37);
			this->Numberlbl->Name = L"Numberlbl";
			this->Numberlbl->Size = System::Drawing::Size(0, 20);
			this->Numberlbl->TabIndex = 1;
			// 
			// Connect64Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 261);
			this->Controls->Add(this->Numberlbl);
			this->Controls->Add(this->NumbersCombo);
			this->Name = L"Connect64Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
