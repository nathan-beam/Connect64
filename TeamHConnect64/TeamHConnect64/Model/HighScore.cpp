#include "..\HighScore.h"

namespace model {
	HighScore::HighScore(String^ name,  int time,  int puzzleNum)
	{
		if (name == nullptr){
			throw gcnew ArgumentException("Name was null!");
		}
		this->name = name;
		this->time = time;
		this->puzzleNum = puzzleNum;
	}

	String^ HighScore::GetName(){
		return this->name;
	}
	int HighScore::GetTime(){
		return this->time;
	}
	int HighScore::GetPuzzleNum(){
		return this->puzzleNum;
	}

}
