#include "GlobalVariables.h"



void AdvancedWrite(string text, int ForegroundColorIndex , int BackgroundColorIndex , int delay , bool ClearScreenAfter)
{
    GlobalVariables g;
        cout << "\033[38;5;" << ForegroundColorIndex << ";48;5;" << BackgroundColorIndex << "m" << text << "\033[0m";
        Sleep(delay);
        if(ClearScreenAfter == true)system("cls");
} 

void  ErrorHandler(int ErrorNumber)
{
    cout << endl;
    if (ErrorNumber == GlobalVariables :: InputErrorNumber)
    {
        AdvancedWrite("Wrong Input -ErrorNumber (" + to_string(ErrorNumber) + ")\n", GlobalVariables::ErrorTextForegroundColorIndex, GlobalVariables::ErrorTextBackgroundColorIndex);

    }

}


int  InputHandler(string Question, int Number_of_Answers)
{

    string message;

    AdvancedWrite(Question);


 InputFilter:



    getline(cin, message);

    if (message.size() > Number_of_Answers || message.size() == 0)
    {
        ErrorHandler(GlobalVariables :: InputErrorNumber);
        goto InputFilter;
    }

    string::const_iterator it = message.begin();

    if (*it == '0')
    {
        ErrorHandler(GlobalVariables :: InputErrorNumber);
        goto InputFilter;
    }

    for (it; it != message.end(); ++it)
        if (isdigit(*it) == 0)
        {
            ErrorHandler(GlobalVariables :: InputErrorNumber);
            goto InputFilter;
        }


    if (!(stoi(message) >= 1 && stoi(message) <= Number_of_Answers))
    {
        ErrorHandler(GlobalVariables :: InputErrorNumber);
        goto InputFilter;

    }


    return stoi(message);

}
