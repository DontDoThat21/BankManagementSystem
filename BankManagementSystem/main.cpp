#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;
using namespace winrt;
using namespace Windows::Foundation;

int main()
{
    init_apartment();    

    system("color A1");

    printf("Changed background color of banking app.\n");

    printf("Hello, world");
}
