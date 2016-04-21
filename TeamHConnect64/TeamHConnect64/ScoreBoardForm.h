#pragma once
#include "ScoreBoard.h"
using namespace model;
namespace Connect64 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/// <summary>
	/// Summary for ScoreBoardForm
	/// </summary>
	public ref class ScoreBoardForm : public System::Windows::Forms::Form
	{
	public:
		ScoreBoardForm(ScoreBoard^ board);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ScoreBoardForm();
		
	private: System::Windows::Forms::DataGridView^  ScoreBoardGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  puzzleNumColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  timeColumm;
			 ScoreBoard^ scores;
			 ResourceManager^ resourceManager;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		void populateScoreBoard();
		void setText();
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
	};
}
