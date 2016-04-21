#pragma once
#include "Board.h"
#include "HighScore.h"
using namespace model;
using namespace System::Collections::Generic;
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