#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System;

// Change
// HI MIKE
[STAThreadAttribute]

int main(array<String^>^) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CalculatorCP::MyForm form;
	Application::Run(% form);


}