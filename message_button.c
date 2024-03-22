#include <stdio.h>
#include <windows.h>

int main()
{
    /* To indicate the buttons displayed in the message box, specify one of the following values. */

    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_ABORTRETRYIGNORE | MB_TOPMOST);   // The message box contains three push buttons: Abort, Retry, and Ignore.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_CANCELTRYCONTINUE | MB_TOPMOST);  // The message box contains three push buttons: Cancel, Try Again, Continue.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_HELP | MB_TOPMOST);               // Adds a Help button to the message box.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_OK | MB_TOPMOST);                 // The message box contains one push button: OK. 
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_OKCANCEL | MB_TOPMOST);           // The message box contains two push buttons: OK and Cancel.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_RETRYCANCEL | MB_TOPMOST);        // The message box contains two push buttons: Retry and Cancel.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNO | MB_TOPMOST);              // The message box contains two push buttons: Yes and No.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",MB_YESNOCANCEL | MB_TOPMOST);        // The message box contains three push buttons: Yes, No, and Cancel.

    /* If the function succeeds, the return value is one of the following menu-item values. */

    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDABORT | MB_TOPMOST);    // The Abort button was selected.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDCANCEL | MB_TOPMOST);   // The Cancel button was selected.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDCONTINUE | MB_TOPMOST); // The Continue button was selected.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDIGNORE | MB_TOPMOST);   // The Ignore button was selected.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDNO | MB_TOPMOST);       // The No button was selected.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDOK | MB_TOPMOST);       // The OK button was selected.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDRETRY | MB_TOPMOST);    // The Retry button was selected.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDTRYAGAIN | MB_TOPMOST); // The Try Again button was selected.
    MessageBox(("ConsoleWindowClass",NULL), "Exit","Good Night!",IDYES | MB_TOPMOST);      // The Yes button was selected.

    return 0;
}