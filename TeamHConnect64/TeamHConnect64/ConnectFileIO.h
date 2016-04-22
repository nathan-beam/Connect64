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

		/*
			Method to load the stored settings.
			@param fileName the file to load the settings from
		*/
		void LoadSettings(String^ fileName);

		/*
			Method to save the settings to a file.
			@param fileName the file to save the settings to
			@param soundEnabled true or false for if the sound is enabled
			@param textColor the color of the text in the view
			@param backgroundColor the color of the background of the form
		*/
		void SaveSettings(String^ fileName, bool soundEnabled, Color^ textColor, Color^ backgroundColor);

		/*
			Method to get the sound setting
			@return true or false to indicate whether sound is enabled
		*/
		bool GetSoundSetting();

		/*
			Method to get the text color setting
			@return a color for the text setting
		*/
		Color^ GetTextColor();

		/*
			Method to get the background color setting
			@return a color for the background setting
		*/
		Color^ GetBackgroundColor();

	private:
		String^ fileName;
		int puzzleNumber;
		Board^ board;
		List<HighScore^>^ scoreboard;
		int timerCount;
		bool soundEnabled;
		Color^ textColor;
		Color^ backgroundColor;
	};
}