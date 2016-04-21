#pragma once
#include "HighScore.h"
#include "ConnectFileIO.h"
using namespace controller;
namespace model{ 

	using namespace System::Collections::Generic;
	using namespace System::Resources;

	public ref class ScoreBoard
	{
	public:
		ScoreBoard();
		void addScore(String^ name, const int time, const int puzzleNum);
		List<HighScore^>^ getScoreBoard();
		bool isHighScore(int score);
		void reset();
		void LoadScores(); 
		void SaveScores();

	private:
		ResourceManager^ resourceManager;
		List<HighScore^>^ scoreboard;
		const int LEADERBOARD_SIZE = 10;
	};
}
