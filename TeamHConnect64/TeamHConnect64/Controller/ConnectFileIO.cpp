#include "..\ConnectFileIO.h"
#using<system.dll>
using namespace System;
using namespace System::IO;

namespace controller{

	void ConnectFileIO::LoadSavedPuzzle(String^ fileName)
	{
		StreamReader^ din = File::OpenText(fileName);

		String^ str;
		int count = 0;

		str = din->ReadLine();
		array<String^>^ values;
		values = str->Split(',');
		this->puzzleNumber = Int32::Parse(values[0]);
		this->board = gcnew Board(this->puzzleNumber);

		str = din->ReadLine();
		values = str->Split(',');
		this->timerCount = Int32::Parse(values[0]);

		while ((str = din->ReadLine()) != nullptr)
		{
			array<String^>^ values;
			values = str->Split(',');
			int x = Int32::Parse(values[0]);
			int y = Int32::Parse(values[1]);;
			int value = Int32::Parse(values[2]);;
			this->board->setTile(x, y, value);

		}
		din->Close();
		

	}

	Board^ ConnectFileIO::GetBoard()
	{
		return this->board;
	}

	int ConnectFileIO::GetPuzzleNumber()
	{
		return this->puzzleNumber;
	}

	void ConnectFileIO::SavePuzzle(String^ fileName, Board^ board, int timerCount)
	{
		this->fileName = fileName;
		this->board = board;
		this->timerCount = timerCount;
		StreamWriter^ sw = gcnew StreamWriter(this->fileName, false);

		sw->WriteLine(this->board->getPuzzleNumber());
		sw->WriteLine(this->timerCount);

		for (int x = 0; x < 8; x++)
		{
			for (int y = 0; y < 8; y++){
				int value = this->board->getTile(x, y);
				if (value != 0)
				{
					sw->WriteLine(x + "," + y + "," + value + ",");
				}
			}
		}
		sw->Close();
	}

	int ConnectFileIO::GetTimerCount()
	{
		return this->timerCount;
	}

	void ConnectFileIO::SaveScoreboard(String^ fileName, List<HighScore^>^ scores)
	{
		this->scoreboard = scores;
		StreamWriter^ sw = gcnew StreamWriter(fileName, false);

		for (int index = 0; index < this->scoreboard->Count; index++)
		{
			HighScore^ score = this->scoreboard[index];
			sw->WriteLine(score->GetName() + "," + score->GetTime() + "," + score->GetPuzzleNum() + ",");
		}
		sw->Close();
	}

	void ConnectFileIO::LoadScoreboard(String^ fileName)
	{	
		try
		{
			StreamReader^ din = File::OpenText(fileName);
			String^ str;
			this->scoreboard = gcnew List<HighScore^>();

			while ((str = din->ReadLine()) != nullptr)
			{
				array<String^>^ values;
				values = str->Split(',');
				String^ name = values[0];
				int time = Int32::Parse(values[1]);;
				int puzzleNumber = Int32::Parse(values[2]);;
				this->scoreboard->Add(gcnew HighScore(name, time, puzzleNumber));
			}
			din->Close();
		}
		catch (Exception^ e) {
			this->scoreboard = nullptr;
		}
	}

	List<HighScore^>^ ConnectFileIO::GetScoreboard()
	{
		return this->scoreboard;
	}
}