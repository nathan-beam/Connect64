#include "..\Board.h"

namespace model{
	Board::Board()
	{
		this->board = gcnew array<int, 2>(8, 8);
	}

	int Board::getTile(int x, int y){
		if (x > 7 || x < 0 || y > 7 || y < 0)
		{
			return 0;  //TODO : Error checking
		}
		return this->board[x, y];
	}

	void Board::setTile(int x, int y, int num){
		if (x > 7 || x < 0 || y > 7 || y < 0)
		{
			return; //TODO : Error checking
		}
		this->board[x, y] = num;
	}
}