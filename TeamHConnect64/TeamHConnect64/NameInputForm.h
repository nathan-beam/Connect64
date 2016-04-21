#pragma once

namespace view {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;
	/// <summary>
	/// Summary for NameInputForm
	/// </summary>
	public ref class NameInputForm : public System::Windows::Forms::Form
	{
	public:
		NameInputForm(void);
		String^ getName();
		

	protected:
		~NameInputForm();
		
	private: System::Windows::Forms::Label^  instructionLabel;
	private: System::Windows::Forms::TextBox^  inputBox;

	private: System::Windows::Forms::Button^  okButton;

	private:
		ResourceManager^ resourceManager;
		String^ name;
		void setText();
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
#pragma endregion

	private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e); 
	};
}