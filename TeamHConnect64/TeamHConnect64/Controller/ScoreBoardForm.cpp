#include "ScoreBoardForm.h"
namespace view{

	ScoreBoardForm::ScoreBoardForm(ScoreBoard^ scoreboard)
	{
		InitializeComponent();
		this->setText();
		this->scores = scoreboard;
		this->populateScoreBoard();
	}

	void ScoreBoardForm::populateScoreBoard(){
		auto scoreBoard = this->scores->getScoreBoard();
		for each (auto score in scoreBoard)
		{
			String^ name = score->getName();
			String^ time = score->getTime() + "";
			String^ puzzleNum = score->getPuzzleNum() + "";
			this->ScoreBoardGridView->Rows->Add(puzzleNum, name, time);

		}
	}

		void ScoreBoardForm::setText(){
			this->resourceManager = gcnew ResourceManager("TeamHConnect64.DisplayStrings", this->GetType()->Assembly);
			this->Text = this->resourceManager->GetString("scoreBoardFormText");
			this->puzzleNumColumn->HeaderText = this->resourceManager->GetString("PuzzleHeader");
			this->nameColumn->HeaderText = this->resourceManager->GetString("NameHeader");
			this->timeColumm->HeaderText = this->resourceManager->GetString("TimeHeader");


		
	}
}

