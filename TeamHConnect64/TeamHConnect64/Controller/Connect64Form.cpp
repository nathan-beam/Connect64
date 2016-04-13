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
		this->confirmInputButton->Text = this->resourceManager->GetString("ConfirmInputButtonText");
		
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
		this->gameBoard = gcnew Board(1);
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
		this->startingBoard = gcnew List<Label^>();
		for each (Object^ control in this->tableLayoutPanel->Controls){
			Label^ label = safe_cast<Label^>(control);
			int x = this->tableLayoutPanel->GetColumn(label);
			int y = this->tableLayoutPanel->GetRow(label);
			int num = this->gameBoard->getTile(x, y);
			if (num == 0){
				label->Text = " ";
			}
			else{
				label->Text = num + "";
				this->startingBoard->Add(label);
				label->ForeColor = Color::Gray;
			}
		}
		this->puzzleNumberLabel->Text = this->resourceManager->GetString("PuzzleNumberLabelText") + this->gameBoard->getPuzzleNumber();

	}

	void Connect64Form::tableLayoutPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e){
		auto selectedCell = new Point(e->X / (tableLayoutPanel->Width / tableLayoutPanel->ColumnCount), e->Y / (tableLayoutPanel->Height / tableLayoutPanel->RowCount));		
		Object^ control = this->tableLayoutPanel->GetControlFromPosition(selectedCell->X, selectedCell->Y);
		if (control->GetType() == Label::typeid){
			Label^ label = safe_cast<Label^>(control);
			if ((!this->numericUpDown->Visible && !this->startingBoard->Contains(label))){
				int x = this->tableLayoutPanel->GetColumn(label);
				int y = this->tableLayoutPanel->GetRow(label);
				this->tableLayoutPanel->Controls->Remove(label);
				this->tableLayoutPanel->Controls->Add(this->numericUpDown,x,y);
				this->editLabel = label;
				this->numericUpDown->Visible = true;
				this->confirmInputButton->Enabled = true;

			}
		}
	}

	void Connect64Form::label_Click(System::Object^  sender, System::EventArgs^  e){
		Label^ label = safe_cast<Label^>(sender);
		if (!this->numericUpDown->Visible && !this->startingBoard->Contains(label)){
			int x = this->tableLayoutPanel->GetColumn(label);
			int y = this->tableLayoutPanel->GetRow(label);
			this->tableLayoutPanel->Controls->Remove(label);
			this->tableLayoutPanel->Controls->Add(this->numericUpDown,x,y);
			this->editLabel = label;
			this->numericUpDown->Visible = true;
			this->confirmInputButton->Enabled = true;

		}
	}

	void Connect64Form::confirmInputButton_Click(System::Object^  sender, System::EventArgs^  e){
		int x = this->tableLayoutPanel->GetColumn(this->numericUpDown);
		int y = this->tableLayoutPanel->GetRow(this->numericUpDown);
		this->numericUpDown->Visible = false;
		this->editLabel->Text = this->numericUpDown->Value +"";
		this->tableLayoutPanel->Controls->Remove(this->numericUpDown);
		this->tableLayoutPanel->Controls->Add(this->editLabel);
		int value = safe_cast<int>(this -> numericUpDown->Value);
		this->gameBoard->setTile(x, y, value);
		this->checkForDuplicates();
		this->confirmInputButton->Enabled = false;
	}

	void Connect64Form::checkForDuplicates(){
		for each (Object^ control in this->tableLayoutPanel->Controls)
		{
			Label^ label = safe_cast<Label^>(control);
			int x = this->tableLayoutPanel->GetColumn(label);
			int y = this->tableLayoutPanel->GetRow(label);
			int value = this->gameBoard->getTile(x, y);
			if (this->gameBoard->isDuplicate(value)){
				label->ForeColor = Color::Red;
			}
			else
			{
				if (!this->startingBoard->Contains(label)){
					label->ForeColor = Color::Black;
				}
			}

		}
	}

	void Connect64Form::resetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		this->setBoard();
	}
}
