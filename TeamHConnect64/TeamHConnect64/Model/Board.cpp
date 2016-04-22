#include "..\Board.h"

namespace model{
	Board::Board(int puzzleNumber)
	{
		this->board = gcnew array<int, 2>(8, 8);
		this->puzzleNumber = puzzleNumber;
	}

	Board::Board(Board^ copyBoard){
		if (copyBoard == nullptr){
			throw gcnew ArgumentException("Board was null!");
		}
		this->board = gcnew array<int, 2>(BOARD_SIZE, BOARD_SIZE);
		this->puzzleNumber = copyBoard->getPuzzleNumber();
		for (int x = 0; x < BOARD_SIZE; x++)
		{
			for (int y = 0; y < BOARD_SIZE; y++){
				this->board[x, y] = copyBoard->getTile(x, y);
			}
		}
	}

	int Board::getTile(int x, int y){
		if (x > BOARD_SIZE - 1 || x < 0 || y > BOARD_SIZE-1 || y < 0)
		{
			return 0;  
		}
		return this->board[x, y];
	}

	void Board::setTile(int x, int y, int num){
		if (x > BOARD_SIZE - 1 || x < 0 || y > BOARD_SIZE - 1 || y < 0)
		{
			return; 
		}
		this->board[x, y] = num;
	}

	bool Board::contains(int value){
		for (int i = 0; i < BOARD_SIZE; i++)
		{
			for (int j = 0; j < BOARD_SIZE; j++){
				if (this->board[i, j] == value){
					return true;
				}
			}
		}
		return false;
	}

	bool Board::isDuplicate(int value){
		if (value == 0){
			return false;
		}
		int valueCount = 0;
		for (int i = 0; i < BOARD_SIZE; i++)
		{
			for (int j = 0; j < BOARD_SIZE; j++){
				if (this->board[i, j] == value){
					valueCount++;
				}
			}
		}
		return valueCount > 1;
	}

	int Board::getPuzzleNumber(){
		return this->puzzleNumber;
	}

	bool Board::isSolved(){
		Point^ firstTile = this->findFirstTile();
		if (firstTile){
			return this->touchingNextTile(firstTile->X, firstTile->Y);
		}
		return false;
	}

	bool Board::touchingNextTile(int x, int y){
		if (this->getTile(x, y) == BOARD_SIZE*BOARD_SIZE){
			return true;
		}
		if (this->touchingOnTop(x, y)){
			return (this->touchingNextTile(x, y - 1));
		}
		if (this->touchingOnLeft(x, y)){
			return (this->touchingNextTile(x-1, y));
		}
		if (this->touchingOnRight(x, y)){
			return (this->touchingNextTile(x+1, y));
		}
		if (this->touchingOnBottom(x, y)){
			return (this->touchingNextTile(x, y + 1));
		}

		return false;
	}

	bool Board::touchingOnTop(int x, int y){
		if (y == 0){
			return false;
		}
		int currVal = this->getTile(x, y);
		int topVal = this->getTile(x, y - 1);
		return topVal == currVal + 1;
	}

	bool Board::touchingOnLeft(int x, int y){
		if (x == 0){
			return false;
		}
		int currVal = this->getTile(x, y);
		int leftVal = this->getTile(x - 1, y);
		return leftVal == currVal + 1;
	}

	bool Board::touchingOnRight(int x, int y){
		if (x == BOARD_SIZE-1){ 
			return false;
		}
		int currVal = this->getTile(x, y);
		int rightVal = this->getTile(x+1,y);
		return rightVal == currVal + 1;
	}

	bool Board::touchingOnBottom(int x, int y){
		if (y == BOARD_SIZE-1){
			return false;
		}
		int currVal = this->getTile(x, y);
		int bottomVal = this->getTile(x, y +1);
		return bottomVal == currVal + 1;
	}

	Point^ Board::findFirstTile(){
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++){
				if (this->board[i, j] == 1){
					return gcnew Point(i,j);
				}
			}
		}
		return nullptr;
	}
}