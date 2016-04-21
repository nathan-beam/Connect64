#include "..\ScoreBoard.h"

namespace model{

	ScoreBoard::ScoreBoard()
	{
		this->scoreboard = gcnew List<HighScore^>();
		this->loadScores();
	}

	void ScoreBoard::addScore(const String^ name, const int time, const int puzzleNum){
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
	const List<HighScore^>^ ScoreBoard::getScoreBoard(){
		return this->scoreboard;
	}

	void ScoreBoard::loadScores(){
		//TODO
		this->scoreboard->Add(gcnew HighScore("Bob", 100, 1));
		this->scoreboard->Add(gcnew HighScore("Sue", 200, 1));
		this->scoreboard->Add(gcnew HighScore("Alice", 300, 1));
		this->scoreboard->Add(gcnew HighScore("Matt", 400, 1));
		this->scoreboard->Add(gcnew HighScore("Duane", 500, 1));
		this->scoreboard->Add(gcnew HighScore("Pete", 600, 1));
		this->scoreboard->Add(gcnew HighScore("James", 700, 1));
		this->scoreboard->Add(gcnew HighScore("Sally", 800, 1));
		this->scoreboard->Add(gcnew HighScore("Jeff", 900, 1));
		this->scoreboard->Add(gcnew HighScore("Nathan", 1000, 1));

	}
	void ScoreBoard::saveScores(){
		//TODO
	}
}