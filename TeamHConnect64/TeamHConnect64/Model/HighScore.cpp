#include "..\HighScore.h"

namespace model {
	HighScore::HighScore(const String^ name, const int time, const int puzzleNum)
	{
		this->name = name;
		this->time = time;
		this->puzzleNum = puzzleNum;
	}

	const String^ HighScore::getName(){
		return this->name;
	}
	int HighScore::getTime(){
		return this->time;
	}
	int HighScore::getPuzzleNum(){
		return this->puzzleNum;
	}
}
