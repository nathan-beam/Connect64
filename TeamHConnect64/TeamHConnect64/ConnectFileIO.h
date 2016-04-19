#pragma once
using namespace System;
using namespace cli;
#include "Board.h"
using namespace model;
namespace Controller{
	ref class ConnectFileIO
	{
	public:
		ConnectFileIO();
		void ReadFile(String^ fileName);
		Board^ GetBoard();
		int GetPuzzleNumber();
	private:
		String^ fileName;
		int puzzleNumber;
		Board^ board;
	};
}