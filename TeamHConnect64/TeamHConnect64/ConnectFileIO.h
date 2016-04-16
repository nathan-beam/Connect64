#pragma once
using namespace System;
using namespace cli;
namespace Controller{
	ref class ConnectFileIO
	{
	public:
		ConnectFileIO();
		void ReadFile(String^ fileName);
		array<int>^ GetXValues();
		array<int>^ GetYValues();
		array<int>^ GetTileValues();
	private:
		String^ fileName;
		int puzzleNumber;
		array<int>^ xValues;
		array<int>^ yValues;
		array<int>^ tileValues;
	};
}