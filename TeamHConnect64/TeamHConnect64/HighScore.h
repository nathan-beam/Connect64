#pragma once
using namespace System;

namespace model {

	public ref class HighScore
	{
	public:
		/*
			Constructor for a High Score object.
			@param name the name of the player who achieved the high score
			@param time the time for the high score
			@param puzzleNum the number the high score was achieved on
		*/
		HighScore(String^ name, const int time, const int puzzleNum); 

		/*
			Method to get the name from the high score.
			@return the name
		*/
		String^ GetName();

		/*
			Method to get the time from the high score.
			@return the time
		*/
		int GetTime();

		/*
			Method to get the puzzle number from the high score.
			@return the puzzle number
		*/
		int GetPuzzleNum();
 
	private:
		String^ name;
		int time;
		int puzzleNum;
	};
}
