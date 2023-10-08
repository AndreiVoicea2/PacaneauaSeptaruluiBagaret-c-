#pragma once
#include <string>
#include <iostream>
#include "windows.h"

using namespace std;

extern int InputHandler(string Question, int Number_of_Answers);


class GlobalVariables
{
	private:
		void ErrorHandler(int ErrorNumber);
		

	public:
		HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//Sectiune pentru constante statice
		static const int MainTextForegroundColorIndex = 15;
		static const int MainTextBackgroundColorIndex = 0;
		static const int ErrorTextForegroundColorIndex = 196;
		static const int ErrorTextBackgroundColorIndex = 0;
		static const int SlotTextForegroundColorIndex = 15;
		static const int SlotTextBackgroundColorIndex = 0;
		static const int InteriorSlotTextForegroundColorIndex = 15;
		static const int InteriorSlotTextBackgroundColorIndex = 0;
		static const int SlotInfoTextForegroundColorIndex = 8;
		static const int SlotInfoTextBackgroundColorIndex = 0;
		static const int BrightColorTextForegroundColor = 190;
		static const int BrightColorTextBackgroundColor = 0;
	
		static const int InputErrorNumber = 1;

			
};

extern void AdvancedWrite(string text, int ForegroundColorIndex = GlobalVariables::MainTextForegroundColorIndex, int BackgroundColorIndex = GlobalVariables :: MainTextBackgroundColorIndex, int delay = 0, bool ClearScreenAfter = false);


