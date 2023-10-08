#pragma once
#include <iostream>
#include <time.h>
#include <windows.h>
#include "Symbol.h"
#include "SDL2SoundEffects.h"
#include "Handlers.h"
#include "AnimationHandler.h"

using namespace std;

class Slots
{
	private:
		Symbol cherry, plum, orange, lemon, grape, melon, seven;
		Symbol SymbolContainer[7];
		Symbol SlotArray[10][10];
		int keypressed;
		int CardHistory[10], CardHistoryLength;
		int ShowInfo = 0, gain;
		string WinMessage;
		

		
		void LoadCardPickingButtons();
		void Double(int& CardPickingGain);
		bool GivePrize(int NumberOfSymbols, int &InitialPrice, Symbol WonSymbol);
		void CalculationOfPaymentLines(int& InitialPrice);
		void LoadTheHelpfulInformation();
		void SlotDataInitialization(int& Balance, int& InitialPrice);
		

	public:
		void Roll(int& Balance, int& InitialPrice, SDL2SoundEffects& se);
		
		

};

