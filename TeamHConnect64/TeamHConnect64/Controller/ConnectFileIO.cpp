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
				count++;
				System:Diagnostics::Debug::Write(str + "\n");
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