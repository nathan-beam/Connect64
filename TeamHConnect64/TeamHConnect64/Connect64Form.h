#pragma once
#include "ScoreBoardForm.h"
#include "NameInputForm.h"
#include "Board.h"
using namespace model;
#include "ConnectFileIO.h"
using namespace controller;


namespace view {
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;
	using namespace System::Collections::Generic;
	using namespace System::Media;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Connect64Form : public System::Windows::Forms::Form
	{
	public:
		Connect64Form(void);


	protected:
		~Connect64Form();

		


	private:
		ResourceManager^ resourceManager;
		ResourceManager^ soundResourceManager;
		Label^ editLabel;
		Board^ startingBoard;
		List<Label^>^ labels;
		int time = 0;
		bool soundEnabled;
		Color^ labelColor;
		Color^ cellColor;
		Board^ gameBoard;
		ConnectFileIO^ fileIO;
		int puzzleCount;
		String^ gamePuzzlesPath;
		String^ puzzleExtension;
	private: System::Windows::Forms::ToolStripMenuItem^  extremePuzzlesToolStripMenuItem;
			 ScoreBoard^ scoreBoard;



		void setBoard();
		void setBoard(Board^ saveBoard);
		void showBoard();
		void setPuzzleChooser();
		void setDisplayText();
		void setTimerLabel();
		void loadSettings();
		void saveSettings();
		Color^ getColorFromUser(Color^ currColor);
		void createLabels();
		void checkForDuplicates();
		void increaseUpDown();
		void clearCell(Label^ labelToClear);
		bool isDefault(Label^ label);
		void checkWin();
		void stopTimer();
		void hideBoard();
		void unhideBoard();
		void loadPuzzle(int puzzleNumber);
		void loadSavedGame();
		void playSuccessSound();
		void playErrorSound();
		void saveBoard();
		void checkIfHighScore();
		void updateTile(Label^ update);
		void checkErroredValueEntered(int value);
		


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);

		System::Windows::Forms::MenuStrip^  menuStrip1;
		System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
		System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel;
		System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;
		System::Windows::Forms::NumericUpDown^  numericUpDown;
		System::Windows::Forms::Label^  puzzleNumberLabel;
		System::Windows::Forms::ComboBox^  puzzleChoiceBox;
		System::Windows::Forms::Label^  selectPuzzlelbl;
		System::Windows::Forms::Button^  loadPuzzleBtn;
		System::Windows::Forms::Timer^  timer;
		System::Windows::Forms::Label^  timeLabel;
		System::Windows::Forms::Button^  timerButton;
		System::Windows::Forms::Label^  pauseMessageLabel;
		System::Windows::Forms::Button^  confirmInputButton;
		System::Windows::Forms::Button^  scoreBoardButton;
		System::Windows::Forms::ToolStripMenuItem^  soundToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  labelColorToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  cellColorToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^  resetHighScoresToolStripMenuItem;
		System::ComponentModel::IContainer^  components;
		System::Void tableLayoutPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void confirmInputButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void resetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void numericUpDown_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
		System::Void loadPuzzleBtn_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void label_Click(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e);
		System::Void timerButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void scoreBoardButton_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void soundToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void labelColorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void cellColorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void resetHighScoresToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void extremePuzzlesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
};
}

