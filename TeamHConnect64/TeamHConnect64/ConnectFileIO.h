#pragma once
using namespace System;
using namespace cli;
#include "ScoreBoard.h"
#include "Board.h"
using namespace model;
namespace controller{
	ref class ConnectFileIO
	{
	public:
		ConnectFileIO();
		void ReadFile(String^ fileName);
		Board^ GetBoard();
		int GetPuzzleNumber();
		void SavePuzzle(String^ fileName, Board^ board, int timeCount);
		void SaveScoreboard(String^ fileName, List<HighScore^>^ scores);
		void LoadScoreboard(String^ fileName);
		List<HighScore^>^ GetScoreboard();
		int GetTimerCount();
	private:
		String^ fileName;
		int puzzleNumber;
		Board^ board;
		List<HighScore^>^ scoreboard;
		int timerCount;
	};
}