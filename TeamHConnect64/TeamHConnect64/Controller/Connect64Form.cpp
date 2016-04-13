#include "Connect64Form.h"

namespace Connect64 {

	Connect64Form::Connect64Form(void)
	{
		InitializeComponent();
		this->resourceManager = gcnew ResourceManager("TeamHConnect64.DisplayStrings", this->GetType()->Assembly);
		this->Text = this->resourceManager->GetString("FormTitleText");
		this->fileToolStripMenuItem->Text = this->resourceManager->GetString("FileMenuItemText");
		this->gameToolStripMenuItem->Text = this->resourceManager->GetString("GameMenuItemText");
		this->settingsToolStripMenuItem->Text = this->resourceManager->GetString("SettingsMenuItemText");
		this->saveToolStripMenuItem->Text = this->resourceManager->GetString("SaveMenuItemText");
		this->loadToolStripMenuItem->Text = this->resourceManager->GetString("LoadMenuItemText");
		this->resetToolStripMenuItem->Text = this->resourceManager->GetString("ResetMenuItemText");
		this->choosePuzzleToolStripMenuItem->Text = this->resourceManager->GetString("ChoosePuzzleMenuItemText");

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
