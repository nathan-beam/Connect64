#pragma once
using namespace System;
using namespace cli;
namespace model{
	ref class Board
	{
	public:
		Board(int puzzleNumber);
		int getTile(int x, int y);
		void setTile(int x, int y, int num);
		bool contains(int value);
		bool isDuplicate(int value);
		int getPuzzleNumber();

	private:
		array<int, 2>^ board;
		int puzzleNumber;
	};
}
