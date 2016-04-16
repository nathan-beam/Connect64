#include "Connect64Form.h"
#using<system.dll>
using namespace System;
using namespace System::IO;

namespace Connect64 {

	Connect64Form::Connect64Form(void)
	{
		InitializeComponent();
		this->resourceManager = gcnew ResourceManager("TeamHConnect64.DisplayStrings", this->GetType()->Assembly);
		this->Text = this->resourceManager->GetString("FormTitleText");
		this->setDisplayText();
		this->fileIO = gcnew ConnectFileIO();
		this->puzzleExtension = ".puz";
		this->gamePuzzlesPath = "GameBoards/";
		DirectoryInfo^ directory = gcnew DirectoryInfo(gamePuzzlesPath);
		this->puzzleCount = directory->GetFiles()->Length;
		this->setPuzzleChooser();
		this->createLabels();
		delete this->fileIO;

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

	void Connect64Form::createLabels(){
		this->labels = gcnew List<Label^>();
		for (int x = 0; x < 8; x++)
		{
			for (int y = 0; y < 8; y++)
			{
				Label^ label = gcnew Label();
				label->Anchor = System::Windows::Forms::AnchorStyles::None;
				label->AutoSize = true;
				label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				label->Location = System::Drawing::Point(398, 382);
				label->Size = System::Drawing::Size(0, 31);
				label->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Connect64Form::label_Click);
				this->labels->Add(label);
				this->tableLayoutPanel->Controls->Add(label, x, y);
			}

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
		this->startingBoard = gcnew Board(gameBoard);
		this->showBoard();
	}

	void Connect64Form::showBoard(){
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
			}
		}
		this->checkForDuplicates();
		this->puzzleNumberLabel->Text = this->resourceManager->GetString("PuzzleNumberLabelText") + this->gameBoard->getPuzzleNumber();
		this->tableLayoutPanel->Enabled = true;

	}

	void Connect64Form::tableLayoutPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e){
		if (this->numericUpDown->Visible){
			this->confirmInputButton_Click(sender, e);
		}
		auto selectedCell = new Point(e->X / (tableLayoutPanel->Width / tableLayoutPanel->ColumnCount), e->Y / (tableLayoutPanel->Height / tableLayoutPanel->RowCount));		
		Object^ control = this->tableLayoutPanel->GetControlFromPosition(selectedCell->X, selectedCell->Y);
		if (control->GetType() == Label::typeid){
			Label^ label = safe_cast<Label^>(control);
			if ((!this->numericUpDown->Visible && !this->isDefault(label))){
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

	void Connect64Form::label_Click(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e){
		Label^ label = safe_cast<Label^>(sender);
		if (this->numericUpDown->Visible){
			this->confirmInputButton_Click(sender, e);
		}
		if (e->Button == System::Windows::Forms::MouseButtons::Right){
			this->clearCell(label);
		}
		if (!this->numericUpDown->Visible && !this->isDefault(label)){
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
		int value = safe_cast<int>(this->numericUpDown->Value);
		this->gameBoard->setTile(x, y, value);
		this->tableLayoutPanel->Controls->Remove(this->numericUpDown);
		this->tableLayoutPanel->Controls->Add(this->editLabel);
		this->checkForDuplicates();
		this->increaseUpDown();
		this->showBoard();
		this->confirmInputButton->Enabled = false;
		if (this->gameBoard->isSolved()){
			MessageBox::Show("Yay!", "You did it!");
			this->tableLayoutPanel->Enabled = false;
		}
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
				if (!this->isDefault(label)){
					label->ForeColor = Color::Black;
				}
				else{
					label->ForeColor = Color::Gray;
				}
			}
		}
	}

	void Connect64Form::resetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
		this->confirmInputButton_Click(sender, e);
		this->gameBoard = gcnew Board(this->gameBoard->getPuzzleNumber());
		this->setBoard();
	}

	void Connect64Form::numericUpDown_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (e->KeyCode == Keys::Enter)
		{
			this->confirmInputButton->PerformClick();
		}
	}
	
	void Connect64Form::increaseUpDown(){
		int upDownValue = Convert::ToInt32(this->numericUpDown->Value);
		if (upDownValue  != 64){
			do{
				this->numericUpDown->Value++;
				upDownValue = Convert::ToInt32(this->numericUpDown->Value);
			} while (this->gameBoard->contains(upDownValue) && upDownValue < 64);
		}
	}

	void Connect64Form::clearCell(Label^ labelToClear){
		if (!this->isDefault(labelToClear)){
			int x = this->tableLayoutPanel->GetColumn(this->numericUpDown);
			int y = this->tableLayoutPanel->GetRow(this->numericUpDown);
		}
	}

	void Connect64Form::setPuzzleChooser()
	{
		for (int i = 0; i < this->puzzleCount; i++)
		{
			this->puzzleChoiceBox->Items->Add(i + 1);
		}
		this->puzzleChoiceBox->SelectedIndex = 0;
	}

	void Connect64Form::loadPuzzleBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->fileIO = gcnew ConnectFileIO();
		this->gameBoard = gcnew Board(1);
		this->setBoard();
		this->fileIO->ReadFile(this->gamePuzzlesPath + (this->puzzleChoiceBox->SelectedIndex + 1) + puzzleExtension);
		delete this->fileIO;
	}

	bool Connect64Form::isDefault(Label^ label){
		int x = this->tableLayoutPanel->GetColumn(label);
		int y = this->tableLayoutPanel->GetRow(label);
		return (startingBoard->getTile(x, y) != 0);
	}

	void Connect64Form::setDisplayText()
	{
		this->fileToolStripMenuItem->Text = this->resourceManager->GetString("FileMenuItemText");
		this->gameToolStripMenuItem->Text = this->resourceManager->GetString("GameMenuItemText");
		this->settingsToolStripMenuItem->Text = this->resourceManager->GetString("SettingsMenuItemText");
		this->saveToolStripMenuItem->Text = this->resourceManager->GetString("SaveMenuItemText");
		this->loadToolStripMenuItem->Text = this->resourceManager->GetString("LoadMenuItemText");
		this->resetToolStripMenuItem->Text = this->resourceManager->GetString("ResetMenuItemText");
		this->confirmInputButton->Text = this->resourceManager->GetString("ConfirmInputButtonText");
		this->selectPuzzlelbl->Text = this->resourceManager->GetString("SelectPuzzleLabelText");
		this->loadPuzzleBtn->Text = this->resourceManager->GetString("LoadPuzzleButtonText");
	}
}
