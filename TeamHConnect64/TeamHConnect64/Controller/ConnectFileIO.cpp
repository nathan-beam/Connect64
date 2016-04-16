#include "..\ConnectFileIO.h"
#using<system.dll>
using namespace System;
using namespace System::IO;

namespace Controller{
	ConnectFileIO::ConnectFileIO()
	{
		this->values = gcnew array<int, 2>(8, 8);
	}

	void ConnectFileIO::ReadFile(String^ fileName)
	{
		try
		{
			StreamReader^ din = File::OpenText(fileName);

			String^ str;
			int count = 0;
			while ((str = din->ReadLine()) != nullptr)
			{
				if (count != 0)
				{
					array<String^>^ values;
					values = str->Split(',');
					int x = Int32::Parse(values[0]);
					int y = Int32::Parse(values[1]);;
					int value = Int32::Parse(values[2]);;
					this->values[x, y] = value;
				} else
				{
					array<String^>^ values;
					values = str->Split(',');
					this->puzzleNumber = Int32::Parse(values[0]);
				}
				count++;
			}
		}
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				Console::WriteLine("file '{0}' not found", fileName);
			else
				Console::WriteLine("problem reading file '{0}'", fileName);
		}

	}

	array<int, 2>^ ConnectFileIO::GetValues()
	{
		return this->values;
	}

	int ConnectFileIO::GetPuzzleNumber()
	{
		return this->puzzleNumber;
	}

}