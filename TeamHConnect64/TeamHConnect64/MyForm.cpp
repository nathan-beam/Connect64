#include "MyForm.h"

namespace Connect64 {

	MyForm::MyForm(void)
	{
		InitializeComponent();
		this->resourceManager = gcnew ResourceManager("TeamHConnect64.DisplayStrings", this->GetType()->Assembly);
		this->Text = this->resourceManager->GetString("FormTitleText");
	}

	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	MyForm::~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}

}
