#pragma once
using namespace System;

namespace model {
	/*
		Class to store a single score for the scoreboard
		@authors Beam
		@Version Spring 2016
	*/
	public ref class HighScore
	{
	public:
		/*
			Constructor for a High Score object.
			@param name the name of the player who achieved the high score
			@param time the time for the high score
			@param puzzleNum the number the high score was achieved on
			@precondition name != null
			@postcondition class is initialized

		*/
		HighScore(String^ name, const int time, const int puzzleNum); 

		/*
			Method to get the name from the high score.
			@return the name
			@precondition none 
			@postcondition none

		*/
		String^ GetName();

		/*
			Method to get the time from the high score.
			@return the time
			@precondition none
			@postcondition none

		*/
		int GetTime();

		/*
			Method to get the puzzle number from the high score.
			@return the puzzle number
			@precondition none
			@postcondition none

		*/
		int GetPuzzleNum();
 
	private:
		String^ name;
		int time;
		int puzzleNum;
	};
}
