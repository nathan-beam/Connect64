#pragma once
using namespace System;
using namespace cli;
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
		int GetTimerCount();
	private:
		String^ fileName;
		int puzzleNumber;
		Board^ board;
		int timerCount;
	};
}