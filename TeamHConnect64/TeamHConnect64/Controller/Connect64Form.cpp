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
		this->gameBoard = gcnew Board();
		this->setBoard();
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
	//Placeholder for now - Just going for functionality
	void Connect64Form::setBoard(){
		this->gameBoard->setTile(0, 0, 1);
		this->gameBoard->setTile(7, 0, 8);
		this->gameBoard->setTile(7, 7, 15);
		this->gameBoard->setTile(0, 7, 22);
		this->gameBoard->setTile(1, 1, 29);
		this->gameBoard->setTile(6, 1, 44);
		this->gameBoard->setTile(6, 6, 39);
		this->gameBoard->setTile(1, 6, 34);
		this->gameBoard->setTile(2, 3, 56);
		this->gameBoard->setTile(5, 3, 49);
		this->gameBoard->setTile(5, 5, 61);
		this->gameBoard->setTile(2, 5, 58);
		this->showBoard();
	}

	void Connect64Form::showBoard(){
		for each (Object^ control in this->tableLayoutPanel->Controls){
			Label^ label = safe_cast<Label^>(control);
			int x = this->tableLayoutPanel->GetColumn(label);
			int y = this->tableLayoutPanel->GetRow(label);
			int num = this->gameBoard->getTile(x, y);
			if (num != 0){
				label->Text = num + "";
			}
		}
	}
	void Connect64Form::tableLayoutPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e){
		TextBox^ tempEntryBox = gcnew TextBox();
		Point^ coords = gcnew Point(e->X, e->Y);
		Object^ control = this->tableLayoutPanel->GetChildAtPoint(*coords);
		Label^ label = safe_cast<Label^>(control);
		label->Text = "C";
		int x = this->tableLayoutPanel->GetColumn(label);
		int y = this->tableLayoutPanel->GetRow(label);
		this->tableLayoutPanel->SetColumn(tempEntryBox, x);
		this->tableLayoutPanel->SetRow(tempEntryBox, y);

	}

	void Connect64Form::label_Click(System::Object^  sender, System::EventArgs^  e){
		TextBox^ tempEntryBox = gcnew TextBox();
		Label^ label = safe_cast<Label^>(sender);
		label->Text = "C";
		int x = this->tableLayoutPanel->GetColumn(label);
		int y = this->tableLayoutPanel->GetRow(label);
		this->tableLayoutPanel->SetColumn(tempEntryBox, x);
		this->tableLayoutPanel->SetRow(tempEntryBox, y);
	}
}
