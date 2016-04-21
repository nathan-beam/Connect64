#include "..\ScoreBoard.h"

namespace model{

	ScoreBoard::ScoreBoard()
	{
		this->scoreboard = gcnew List<HighScore^>();
		this->loadScores();
	}

	void ScoreBoard::addScore(String^ name,  int time,  int puzzleNum){
		HighScore^ newScore = gcnew HighScore(name, time, puzzleNum);
		for (int i = 0; i < this->LEADERBOARD_SIZE; i++)
		{
			HighScore^ compareScore = this->scoreboard[i];
			if (compareScore->getTime() > newScore->getTime()){
				this->scoreboard->Insert(i, newScore);
				this->scoreboard->RemoveAt(this->LEADERBOARD_SIZE);
				break;
			}
		}
	}
	 List<HighScore^>^ ScoreBoard::getScoreBoard(){
		return this->scoreboard;
	}

	 bool ScoreBoard::isHighScore(int score){
		 int lowestScore = this->scoreboard[LEADERBOARD_SIZE - 1]->getTime();
		 return lowestScore > score;
	 }

	void ScoreBoard::loadScores(){
		//TODO
		this->scoreboard->Add(gcnew HighScore("Bob", 100, 1));
		this->scoreboard->Add(gcnew HighScore("Sue", 200, 2));
		this->scoreboard->Add(gcnew HighScore("Alice", 300, 3));
		this->scoreboard->Add(gcnew HighScore("Matt", 400, 4));
		this->scoreboard->Add(gcnew HighScore("Duane", 500, 5));
		this->scoreboard->Add(gcnew HighScore("Pete", 600, 6));
		this->scoreboard->Add(gcnew HighScore("James", 700, 7));
		this->scoreboard->Add(gcnew HighScore("Sally", 800, 8));
		this->scoreboard->Add(gcnew HighScore("Jeff", 900, 9));
		this->scoreboard->Add(gcnew HighScore("Nathan", 1000, 10));

	}
	void ScoreBoard::saveScores(){
		//TODO
	}
}