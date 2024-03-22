#include <stdio.h>
#include <windows.h>

int main()
{
    /* To display an icon in the message box, specify one of the following values. */
    
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_ICONHAND);        // MB_ICONHAND, MB_ICONSTOP, or MB_ICONERROR
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_ICONQUESTION);    
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_ICONEXCLAMATION); // MB_ICONEXCLAMATION or MB_ICONWARNING 
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_ICONINFORMATION); // MB_ICONASTERISK or MB_ICONINFORMATION

    return 0;
}