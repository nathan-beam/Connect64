#include "Connect64Form.h"

using namespace Connect64;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Connect64Form());
	return 0;
}