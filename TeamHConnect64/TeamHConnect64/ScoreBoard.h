#pragma once
#include "HighScore.h"

namespace model{ 
	using namespace System::Collections::Generic;

	public ref class ScoreBoard
	{
	public:
		ScoreBoard();
		void addScore(String^ name, const int time, const int puzzleNum);
		 List<HighScore^>^ getScoreBoard();
		 bool isHighScore(int score);
		 void reset();

	private:
		List<HighScore^>^ scoreboard;
		const int LEADERBOARD_SIZE = 10;
		void loadScores(); 
		void saveScores();
	};
}
