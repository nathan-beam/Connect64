#pragma once
using namespace System;

namespace model {

	public ref class HighScore
	{
	public:
		HighScore(String^ name, const int time, const int puzzleNum); 
		String^ GetName();
		int GetTime();
		int GetPuzzleNum();
 
	private:
		String^ name;
		int time;
		int puzzleNum;
	};
}
