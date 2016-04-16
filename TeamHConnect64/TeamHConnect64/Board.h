#pragma once
using namespace System;
using namespace cli;
using namespace System::Drawing;

namespace model{
	ref class Board
	{
	public:
		Board(int puzzleNumber);
		Board(Board^ copyBoard);
		int getTile(int x, int y);
		void setTile(int x, int y, int num);
		bool contains(int value);
		bool isDuplicate(int value);
		int getPuzzleNumber();
		bool isSolved();

	private:
		array<int, 2>^ board;
		int puzzleNumber;
		bool touchingNextTile(int x, int y);
		bool touchingOnTop(int x, int y);
		bool touchingOnLeft(int x, int y);
		bool touchingOnRight(int x, int y);
		bool touchingOnBottom(int x, int y);
		Point^ findFirstTile();
	};
}
