#pragma once
namespace model{ 
	#include "HighScore.h"
	using namespace model;
	using namespace System::Collections::Generic;

	ref class ScoreBoard
	{
	public:
		ScoreBoard();
		void addScore(const String^ name, const int time, const int puzzleNum);
		const List<HighScore^>^ getScoreBoard();

	private:
		List<HighScore^>^ scoreboard;
		const int LEADERBOARD_SIZE = 10;
		void loadScores(); 
		void saveScores();
	};
}
