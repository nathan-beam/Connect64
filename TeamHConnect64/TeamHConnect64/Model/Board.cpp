#include "..\Board.h"

namespace model{
	Board::Board()
		//TODO: Board size to constants
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

	bool Board::contains(int value){
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++){
				if (this->board[i, j] == value){
					return true;
				}
			}
		}
		return false;
	}

	bool Board::isDuplicate(int value){
		int valueCount = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++){
				if (this->board[i, j] == value){
					valueCount++;
				}
			}
		}
		return valueCount > 1;
	}
}