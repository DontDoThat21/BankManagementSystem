#include "pch.h"
#include <Windows.h>

using namespace winrt;
using namespace Windows::Foundation;

int main()
{
    init_apartment();    

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);

    WORD originalAttributes = consoleInfo.wAttributes;

    // set the background color of the console
    SetConsoleTextAttribute(hConsole, (consoleInfo.wAttributes & 0xF0) | BACKGROUND_BLUE | BACKGROUND_GREEN);
    printf("Changed background color of banking app.\n");

    printf("Hello, world");
}
