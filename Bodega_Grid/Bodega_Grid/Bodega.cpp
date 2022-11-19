#include "Bodega.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BodegaGrid::Bodega form;
	Application::Run(% form);
	return 0;
}

