#include "Connect64Form.h"

namespace Connect64 {

	Connect64Form::Connect64Form(void)
	{
		InitializeComponent();
		this->resourceManager = gcnew ResourceManager("TeamHConnect64.DisplayStrings", this->GetType()->Assembly);
		this->Text = this->resourceManager->GetString("FormTitleText");
		this->Numberlbl->Text = this->resourceManager->GetString("NumberChoiceLabelText");
	}

	/// <summary>
	/// Clean up any resources being used.
	/// </summary>
	Connect64Form::~Connect64Form()
	{
		if (components)
		{
			delete components;
		}
	}

}
