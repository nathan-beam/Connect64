#pragma once
namespace model {
	using namespace System;

	ref class HighScore
	{
	public:
		HighScore(const String^ name, const int time, const int puzzleNum); 
		const String^ getName();
		int getTime();
		int getPuzzleNum();
		const String^ toString();

	private:
		const String^ name;
		int time;
		int puzzleNum;
	};
}
