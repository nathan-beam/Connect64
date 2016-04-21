#pragma once
namespace model {
	using namespace System;

	public ref class HighScore
	{
	public:
		HighScore(String^ name, const int time, const int puzzleNum); 
		String^ getName();
		int getTime();
		int getPuzzleNum();
 
	private:
		String^ name;
		int time;
		int puzzleNum;
	};
}
