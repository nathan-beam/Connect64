#include "..\Board.h"

namespace model{
	Board::Board(int puzzleNumber)
		//TODO: Board size to constants
	{
		this->board = gcnew array<int, 2>(8, 8);
		this->puzzleNumber = puzzleNumber;
	}

	Board::Board(Board^ copyBoard){
		this->board = gcnew array<int, 2>(8, 8);
		this->puzzleNumber = copyBoard->getPuzzleNumber();
		for (int x = 0; x < 8; x++)
		{
			for (int y = 0; y < 8; y++){
				this->board[x, y] = copyBoard->getTile(x, y);
			}
		}
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
		if (this->getTile(x, y) == 64){ //TODO: Size^2
			return true;
		}
		if (this->touchingOnTop(x, y)){
			return (this->touchingNextTile(x, y - 1));//SIZE
		}
		if (this->touchingOnLeft(x, y)){
			return (this->touchingNextTile(x-1, y));//SIZE
		}
		if (this->touchingOnRight(x, y)){
			return (this->touchingNextTile(x+1, y));//SIZE
		}
		if (this->touchingOnBottom(x, y)){
			return (this->touchingNextTile(x, y + 1));//SIZE
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
		if (x == 7){ //SIZE
			return false;
		}
		int currVal = this->getTile(x, y);
		int rightVal = this->getTile(x+1,y);
		return rightVal == currVal + 1;
	}

	bool Board::touchingOnBottom(int x, int y){
		if (y == 7){//SIZE
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
	}
}