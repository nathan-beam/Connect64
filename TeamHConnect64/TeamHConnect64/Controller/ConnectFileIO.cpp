#include "..\ConnectFileIO.h"
#using<system.dll>
using namespace System;
using namespace System::IO;

namespace Controller{
	ConnectFileIO::ConnectFileIO()
	{
		this->xValues = gcnew array<int>(64);
		this->yValues = gcnew array<int>(64);
		this->tileValues = gcnew array<int>(64);
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
					this->xValues[count] = x;
					this->yValues[count] = y;
					this->tileValues[count] = value;
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

	array<int>^ ConnectFileIO::GetXValues()
	{
		return this->xValues;
	}

	array<int>^ ConnectFileIO::GetYValues()
	{
		return this->yValues;
	}

	array<int>^ ConnectFileIO::GetTileValues()
	{
		return this->tileValues;
	}

}