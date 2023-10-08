#include "Handlers.h"

void Handlers::ErrorHandler(int ErrorNumber)
{
    cout << endl;
    if (ErrorNumber == InputErrorNumber)
    {
        WriteColoredText("Wrong Input -ErrorNumber (" + to_string(ErrorNumber) + ")" , GlobalVariables :: ErrorTextForegroundColorIndex, GlobalVariables :: ErrorTextBackgroundColorIndex, true, 0, false);

    }

}


 int Handlers::InputHandler(string Question, int Number_of_Answers, bool UseEndlForQuestion)
{

    string mesaj;
    
    WriteColoredText(Question, GlobalVariables :: MainTextForegroundColorIndex, GlobalVariables :: MainTextBackgroundColorIndex , true , 0 , false);

    if(UseEndlForQuestion == true)
    cout << endl;

ReiaRaspuns:

    

    getline(cin, mesaj);

    if (mesaj.size() > Number_of_Answers || mesaj.size() == 0)
    {
        ErrorHandler(InputErrorNumber);
        goto ReiaRaspuns;
    }

    string::const_iterator it = mesaj.begin();

    if (*it == '0')
    {
        ErrorHandler(InputErrorNumber);
        goto ReiaRaspuns;
    }

    for (it; it != mesaj.end(); ++it)
        if (isdigit(*it) == 0)
        {
            ErrorHandler(InputErrorNumber);
            goto ReiaRaspuns;
        }
        

    if (!(stoi(mesaj) >= 1 && stoi(mesaj) <= Number_of_Answers))
    {
        ErrorHandler(InputErrorNumber);
        goto ReiaRaspuns;

    }


    return stoi(mesaj);

}