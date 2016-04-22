#pragma once

namespace view {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;
	/*
		Form for inputting a name after a high schore is acheived
		@authors Beam
		@version Spring 2016
	*/
	public ref class NameInputForm : public System::Windows::Forms::Form
	{
	public:
		/*
			Constructor to initialize the form
			@precondition none
			@postcondition the object is initialized
		*/
		NameInputForm();

		/*
			Getter for name entered by user
			@return the name supplied by user, or anonymous if name not supplied
			@precondition none
			@postcondition none

		*/
		String^ getName();


	protected:
		~NameInputForm();

	private:

	private:
		ResourceManager^ resourceManager;
		String^ name;
		void setText();
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
		System::Windows::Forms::Label^  instructionLabel;
		System::Windows::Forms::TextBox^  inputBox;
		System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Windows::Forms::Button^  okButton;
#pragma endregion

	};
}