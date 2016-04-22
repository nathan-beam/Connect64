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
		/*
			Constructor for a new scoreboard object.
		*/
		ScoreBoard();

		/*
			Method to add a score to the scoreboard.
			@param name the name of the player to add
			@param time the time of the players session
			@param puzzleNum the puzzle number
		*/
		void addScore(String^ name, const int time, const int puzzleNum);

		/*
			Method to get the scoreboard
			@return the scoreboard
		*/
		List<HighScore^>^ getScoreBoard();

		/*
			Method to check and see if the input score is a high score.
			@param score the score to check for
			@return true or false if the score is a high score
		*/
		bool isHighScore(int score);

		/*
			Method to reset the scoreboard.
		*/
		void reset();

		/*
			Method to load the scoreboard from the save file.
		*/
		void LoadScores(); 
		
		/*
			Method to save the scoreboard to the save file.
		*/ 
		void SaveScores();

	private:
		ResourceManager^ resourceManager;
		List<HighScore^>^ scoreboard;
		const int LEADERBOARD_SIZE = 10;
	};
}
