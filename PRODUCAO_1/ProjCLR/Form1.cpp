// Simula��o de Tarifa (Produ��o 1)
// 2019-05-29
// Victor Domingos

#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] //leave this as is
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjCLR::Form1 form;
	Application::Run(% form);
}



