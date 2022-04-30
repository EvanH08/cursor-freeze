#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <conio.h>

using namespace std;

int main() 
{
    cout << "WARNING: This program may be harmful to your computer. Proceed? \n";
    system("pause");
    for( ; ; ) 
    {
        SetCursorPos(0, 0);
    }
}
