#pragma once
using namespace System;
using namespace cli;
namespace model{
	ref class Board
	{
	public:
		Board();
		int getTile(int x, int y);
		void setTile(int x, int y, int num);
		bool contains(int value);
		bool isDuplicate(int value);

	private:
		array<int, 2>^ board;
	};
}
