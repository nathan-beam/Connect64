#pragma once
using namespace System;
using namespace cli;
namespace Controller{
	ref class ConnectFileIO
	{
	public:
		ConnectFileIO();
		void ReadFile(String^ fileName);
	private:
		String^ fileName;
	};
}