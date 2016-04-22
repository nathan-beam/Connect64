#pragma once
#include "ScoreBoardForm.h"
#include "NameInputForm.h"
#include "Board.h"
using namespace model;
#include "ConnectFileIO.h"
using namespace controller;


namespace view {
	using namespace IO;
	using namespace System;
	using namespace Windows::Forms::ComponentModel;
	using namespace Collections;
	using namespace Windows::Forms;
	using namespace Data;
	using namespace Drawing;
	using namespace Resources;
	using namespace Collections::Generic;
	using namespace Media;

	/// <summary>
	/// Summary for Connect64Form
	/// </summary>
	public ref class Connect64Form : public Form
	{
	public:
		Connect64Form(void);

	protected:
		~Connect64Form();

	private:
		Board^ gameBoard;
		Board^ startingBoard;
		bool soundEnabled;
		Button^  confirmInputButton;
		Button^  loadPuzzleBtn;
		Button^  scoreBoardButton;
		Button^  timerButton;
		Color^ cellColor;
		Color^ labelColor;
		ComboBox^  puzzleChoiceBox;
		ConnectFileIO^ fileIO;
		IContainer^  components;
		int puzzleCount;
		int time = 0;
		Label^  pauseMessageLabel;
		Label^  puzzleNumberLabel;
		Label^  selectPuzzlelbl;
		Label^  timeLabel;
		Label^ editLabel;
		List<Label^>^ labels;
		MenuStrip^  menuStrip1;
		NumericUpDown^  numericUpDown;
		ResourceManager^ resourceManager;
		ResourceManager^ soundResourceManager;
		ScoreBoard^ scoreBoard;
		String^ gamePuzzlesPath;
		String^ puzzleExtension;
		TableLayoutPanel^  tableLayoutPanel;
		Timer^  timer;
		ToolStripMenuItem^  cellColorToolStripMenuItem;
		ToolStripMenuItem^  fileToolStripMenuItem;
		ToolStripMenuItem^  gameToolStripMenuItem;
		ToolStripMenuItem^  labelColorToolStripMenuItem;
		ToolStripMenuItem^  loadToolStripMenuItem;
		ToolStripMenuItem^  resetHighScoresToolStripMenuItem;
		ToolStripMenuItem^  resetToolStripMenuItem;
		ToolStripMenuItem^  saveToolStripMenuItem;
		ToolStripMenuItem^  settingsToolStripMenuItem;
		ToolStripMenuItem^  soundToolStripMenuItem;


		void setBoard();
		void setBoard(Board^ saveBoard);
		void showBoard();
		void setPuzzleChooser();
		void setDisplayText();
		void setTimerLabel();
		void loadSettings();
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
		Color^ getColorFromUser(Color^ currColor);
		void checkErroredValueEntered(int value);
		void tableLayoutPanel_MouseDown(Object^  sender, MouseEventArgs^  e);
		void confirmInputButton_Click(Object^  sender, EventArgs^  e);
		void resetToolStripMenuItem_Click(Object^  sender, EventArgs^  e);
		void numericUpDown_KeyDown(Object^  sender, KeyEventArgs^  e);
		void loadPuzzleBtn_Click(Object^  sender, EventArgs^  e);
		void label_Click(Object^  sender, MouseEventArgs^  e);
		void timer_Tick(Object^  sender, EventArgs^  e);
		void timerButton_Click(Object^  sender, EventArgs^  e);
		void loadToolStripMenuItem_Click(Object^  sender, EventArgs^  e);
		void saveToolStripMenuItem_Click(Object^  sender, EventArgs^  e);
		void scoreBoardButton_Click(Object^  sender, EventArgs^  e);
		void soundToolStripMenuItem_Click(Object^  sender, EventArgs^  e);
		void labelColorToolStripMenuItem_Click(Object^  sender, EventArgs^  e);
		void cellColorToolStripMenuItem_Click(Object^  sender, EventArgs^  e);
		void resetHighScoresToolStripMenuItem_Click(Object^  sender, EventArgs^  e);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);

	};
}

