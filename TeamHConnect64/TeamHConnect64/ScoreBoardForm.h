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


	public ref class ScoreBoardForm : public System::Windows::Forms::Form
	{
	public:
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