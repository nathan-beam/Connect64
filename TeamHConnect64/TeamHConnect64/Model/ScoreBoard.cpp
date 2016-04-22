#include "..\ScoreBoard.h"

namespace model{

	ScoreBoard::ScoreBoard()
	{
		this->scoreboard = gcnew List<HighScore^>();
		this->resourceManager = gcnew ResourceManager("TeamHConnect64.DisplayStrings", this->GetType()->Assembly);
		this->LoadScores();
	}

	void ScoreBoard::addScore(String^ name,  int time,  int puzzleNum){
		if (name == nullptr){
			throw gcnew ArgumentException("Name was null!");
		}
		HighScore^ newScore = gcnew HighScore(name, time, puzzleNum);
		if (this->scoreboard->Count == 0)
		{
			this->scoreboard->Insert(0, newScore);

		} else
		{
			for (int i = 0; i < this->LEADERBOARD_SIZE; i++)
			{
				HighScore^ compareScore = this->scoreboard[i];
				if (compareScore->GetTime() > newScore->GetTime()){
					this->scoreboard->Insert(i, newScore);
					if (this->scoreboard->Count > LEADERBOARD_SIZE){
						this->scoreboard->RemoveAt(this->LEADERBOARD_SIZE);
					}
					break;
				}
				else if (i + 1 == this->scoreboard->Count && i!=9){
					this->scoreboard->Insert(i+1, newScore);
					break;
				}
			}
			
		}
	}
	 List<HighScore^>^ ScoreBoard::getScoreBoard(){
		return this->scoreboard;
	}

	 bool ScoreBoard::isHighScore(int score){
		 if (this->scoreboard->Count < 10)
		 {
			 return true;
		 }
		 if (this->scoreboard->Count != 0)
		 {
			 int lowestScore = this->scoreboard[this->scoreboard->Count - 1]->GetTime();
			 return lowestScore > score;
			 
		 }
		 return false;
	 }

	 void ScoreBoard::reset(){
		 this->scoreboard = gcnew List<HighScore^>();
		 this->SaveScores();
	 }
	void ScoreBoard::LoadScores(){
		ConnectFileIO^ fileIO = gcnew ConnectFileIO();
		fileIO->LoadScoreboard(this->resourceManager->GetString("ScoreboardFilePath"));
		if (fileIO->GetScoreboard() != nullptr)
		{
			this->scoreboard = fileIO->GetScoreboard();
		}
	}

	void ScoreBoard::SaveScores(){
		ConnectFileIO^ fileIO = gcnew ConnectFileIO();
		fileIO->SaveScoreboard(this->resourceManager->GetString("ScoreboardFilePath"), this->scoreboard);
	}
}