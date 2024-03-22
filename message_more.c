#include <stdio.h>
#include <windows.h>

int main()
{
    /* To specify other options, use one or more of the following values. */
    
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_DEFAULT_DESKTOP_ONLY);  // If the current input desktop is not the default desktop, MessageBox does not return until the user switches to the default desktop.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_RIGHT);                 // The text is right-justified.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_RTLREADING);            // Displays message and caption text using right-to-left reading order on Hebrew and Arabic systems.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_SETFOREGROUND);         // The message box becomes the foreground window. Internally, the system calls the SetForegroundWindow function for the message box.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_TOPMOST);               // The message box is created with the WS_EX_TOPMOST window style.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_SERVICE_NOTIFICATION);  // The caller is a service notifying the user of an event. The function displays a message box on the current active desktop, even if there is no user logged on to the computer.

    return 0;
}