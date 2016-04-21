#pragma once
#include "ScoreBoardForm.h"
#include "NameInputForm.h"
#include "Board.h"
using namespace model;
#include "ConnectFileIO.h"

using namespace controller;


namespace view {

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

		 ResourceManager^ resourceManager;
		 ResourceManager^ soundResourceManager;


	private:
	 System::Windows::Forms::MenuStrip^  menuStrip1;
	 System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	 System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel;
			 Board^ gameBoard;
			 ConnectFileIO^ fileIO;
			 int puzzleCount;
			 String^ gamePuzzlesPath;
			 String^ puzzleExtension;
			 ScoreBoard^ scoreBoard;
			 

	 System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;
	 System::Windows::Forms::NumericUpDown^  numericUpDown;


		 Label^ editLabel;
		 Board^ startingBoard;
		 List<Label^>^ labels;
		 int time = 0;
		 bool soundEnabled;
		 Color^ labelColor;
		 Color^ cellColor;
	 System::Windows::Forms::Label^  puzzleNumberLabel;
	private: System::Windows::Forms::ComboBox^  puzzleChoiceBox;
	private: System::Windows::Forms::Label^  selectPuzzlelbl;
	private: System::Windows::Forms::Button^  loadPuzzleBtn;
	private: System::Windows::Forms::Timer^  timer;

	private: System::Windows::Forms::Label^  timeLabel;
	private: System::Windows::Forms::Button^  timerButton;
	private: System::Windows::Forms::Label^  pauseMessageLabel;
	private: System::Windows::Forms::Button^  confirmInputButton;
	private: System::Windows::Forms::Button^  scoreBoardButton;
	private: System::Windows::Forms::ToolStripMenuItem^  soundToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  labelColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cellColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resetHighScoresToolStripMenuItem;



	private: System::ComponentModel::IContainer^  components;



		
		/// <summary>
		/// Required designer variable.
		/// </summary>


		void setBoard();
		void setBoard(Board^ saveBoard);
		void showBoard();
		void setPuzzleChooser();
		void setDisplayText();
		void setTimerLabel();
		void loadSettings();
		Color^ getColorFromUser(Color^ currColor);


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);

 System::Void tableLayoutPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);


 System::Void confirmInputButton_Click(System::Object^  sender, System::EventArgs^  e);
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
 System::Void resetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
 System::Void numericUpDown_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
 System::Void loadPuzzleBtn_Click(System::Object^  sender, System::EventArgs^  e);
 System::Void label_Click(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timerButton_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
			 System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void scoreBoardButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void soundToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void labelColorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void cellColorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void resetHighScoresToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
};
}

