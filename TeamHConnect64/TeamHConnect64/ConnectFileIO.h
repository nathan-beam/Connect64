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
		void SaveFile(String^ fileName, Board^ board);
	private:
		String^ fileName;
		int puzzleNumber;
		Board^ board;
	};
}