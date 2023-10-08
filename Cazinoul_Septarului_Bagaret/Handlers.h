#ifndef HANDLERS_H
#define HANDLERS_H
#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include "GlobalVariables.h"


using namespace std;

class Handlers
{
public:

    void ErrorHandler(int ErrorNumber);
    int InputHandler(string Question, int NumarRaspunsuri, bool UseEndlForQuestion);

    const int InputErrorNumber = 1;

};

#endif // HANDLERS_H

