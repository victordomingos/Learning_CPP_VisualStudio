#include "Janela.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] //leave this as is
void main(array<String^>^ args) 
{  
    Application::EnableVisualStyles();  
    Application::SetCompatibleTextRenderingDefault(false);  
    My06listboxarrayexercise::Janela janela;  Application::Run(%janela);

} 

