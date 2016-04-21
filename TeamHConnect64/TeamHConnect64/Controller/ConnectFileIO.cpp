#include "..\ConnectFileIO.h"
#using<system.dll>
using namespace System;
using namespace System::IO;

namespace controller{
	ConnectFileIO::ConnectFileIO()
	{

	}

	void ConnectFileIO::ReadFile(String^ fileName)
	{
		try
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
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				Console::WriteLine("file '{0}' not found", fileName);
			else
				Console::WriteLine("problem reading file '{0}'", fileName);
		}

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

}