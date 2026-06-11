#include "mainMenu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // test — имя вашего проекта, MyForm — имя формы
    DBnGame::mainMenu form;
    Application::Run(% form);
    return 0;
}