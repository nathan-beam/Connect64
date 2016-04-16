#pragma once
using namespace System;
using namespace cli;
namespace Controller{
	ref class ConnectFileIO
	{
	public:
		ConnectFileIO();
		void ReadFile(String^ fileName);
		array<int,2>^ GetValues();
		int GetPuzzleNumber();
	private:
		String^ fileName;
		int puzzleNumber;
		array<int,2>^ values;
	};
}