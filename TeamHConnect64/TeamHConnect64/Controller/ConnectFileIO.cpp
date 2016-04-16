#include "..\ConnectFileIO.h"
#using<system.dll>
using namespace System;
using namespace System::IO;

namespace Controller{
	ConnectFileIO::ConnectFileIO()
	{
	}

	void ConnectFileIO::ReadFile(String^ fileName)
	{
		try
		{
			Console::WriteLine("trying to open file {0}...", fileName);
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
					System:Diagnostics::Debug::Write(x + " " + y + " " + value + "\n");
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

}