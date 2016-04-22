#pragma once
#include "ScoreBoard.h"
using namespace model;
namespace view {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/*
		Form to display the leaderboard for the top times
		@authors Beam
		@version Spring 2016
	*/
	public ref class ScoreBoardForm : public System::Windows::Forms::Form
	{
	public:
		/*
			Constructor to initialize the class
			@param board the scoreboard to display
			@precondition board != null
			@postcondition the object is initialized
		*/
		ScoreBoardForm(ScoreBoard^ board);

	protected:
		~ScoreBoardForm();

	private:
		ScoreBoard^ scores;
		ResourceManager^ resourceManager;
		void populateScoreBoard();
		void setText();
#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
		System::Windows::Forms::DataGridView^  ScoreBoardGridView;
		System::Windows::Forms::DataGridViewTextBoxColumn^  puzzleNumColumn;
		System::Windows::Forms::DataGridViewTextBoxColumn^  nameColumn;
		System::Windows::Forms::DataGridViewTextBoxColumn^  timeColumm;
		System::ComponentModel::Container ^components;
#pragma endregion
	};
}