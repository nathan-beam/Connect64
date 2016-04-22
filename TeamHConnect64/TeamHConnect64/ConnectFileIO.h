#pragma once
#include "Board.h"
#include "HighScore.h"
using namespace model;
using namespace System::Collections::Generic;
namespace controller{
	ref class ConnectFileIO
	{
	public:
		
		/*
			Method to load the saved puzzle
			@param fileName the file to load the puzzle from.
		*/
		void LoadSavedPuzzle(String^ fileName);

		/*
			Method to get the board that is stored.
			@return the stored board.
		*/
		Board^ GetBoard();

		/*
			Method to get the puzzle number that has been read into the object.
		*/
		int GetPuzzleNumber();

		/*
			Method to read store a board and time to a save file.
			@param filename the name of the file to save to.
			@param board the game board that is being saved.
			@param timeCount the time the user has currently spent to be saved.
		*/
		void SavePuzzle(String^ fileName, Board^ board, int timeCount);

		/*
			Method to save a scoreboard to a save file.
			@param filename the name of the file to save to.
			@param scores the scores to save to the file.
		*/
		void SaveScoreboard(String^ fileName, List<HighScore^>^ scores);

		/*
			Method to load a scoreboard from a file.
			@param fileName the name of the file to load the scoreboard from.
		*/
		void LoadScoreboard(String^ fileName);

		/*
			Method to save a scoreboard to a save file.
		*/
		List<HighScore^>^ GetScoreboard();

		/*
			Method to get the stored count from thet timer.
		*/
		int GetTimerCount();
	private:
		String^ fileName;
		int puzzleNumber;
		Board^ board;
		List<HighScore^>^ scoreboard;
		int timerCount;
	};
}