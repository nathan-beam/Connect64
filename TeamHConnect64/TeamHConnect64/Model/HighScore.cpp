#include "..\HighScore.h"

namespace model {
	HighScore::HighScore(String^ name,  int time,  int puzzleNum)
	{
		this->name = name;
		this->time = time;
		this->puzzleNum = puzzleNum;
	}

	String^ HighScore::getName(){
		return this->name;
	}
	int HighScore::getTime(){
		return this->time;
	}
	int HighScore::getPuzzleNum(){
		return this->puzzleNum;
	}

}
