#pragma once
using namespace System;
using namespace cli;
using namespace System::Drawing;

namespace model{
	/*
		Class to represent a square grid of numbers for the connect64 game
		@authors Beam
		@version Spring 2016
	*/
	ref class Board
	{
	public:
		/*
			Constuctor for a new board object with a specified puzzle number.
			@param puzzleNumber the number of the puzzle board

		*/
		Board(int puzzleNumber);

		/*
			Copy constructor for a board object.
			@param copyBoard the board object to copy
			@precondition board to copy is not null
			@postcondition a deep copy of the board is returned

		*/
		Board(Board^ copyBoard);

		/*
			Method to get the value at a specified location in the board.
			@param x the value of the x-coordinate
			@param y the value of the y-coordinate
			@return the value at the x-y location
		*/
		int getTile(int x, int y);

		/*
			Method to set the value at a specified location in the board.
			@param x the value of the x-coordinate
			@param y the value of the y-coordinate
			@param num the value to be set in the x-y location
		*/
		void setTile(int x, int y, int num);

		/*
			Method to see if the board contains a value.
			@param value the value being checked for
			@return true or false depending on if the value is in the board
		*/
		bool contains(int value);


		/*
			Method to see if the board contains two of the same values.
			@param value the value being checked for
			@return true or false depending on if the value is duplicated in the board
		*/
		bool isDuplicate(int value);

		/*
			Method to get the puzzle number.
			@return the puzzle number
		*/
		int getPuzzleNumber();

		/*
			Method to see if the board/puzzle is fully solved.
			@return true if the puzzle is solved, false if not
		*/
		bool isSolved();

	private:
		int BOARD_SIZE = 8;
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
