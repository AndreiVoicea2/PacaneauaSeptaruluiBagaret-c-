#pragma once
#include <iostream>

using namespace std;

class Symbol
{
	private:
		unsigned short int index;
		unsigned short int chance;
		unsigned int value;
		string SymbolName;

	public:
		
		void SetIndex(unsigned short int _index);
		void SetChance(unsigned short int _chance);
		void SetValue(unsigned int _value);
		void SetSymbolName(string _SymbolName);
		unsigned short int GetIndex();
		unsigned short int GetChance();
		unsigned int GetValue();
		string GetSymbolName();
		Symbol();
		Symbol(unsigned short int _index , unsigned short int _chance , unsigned int _value, string _SymbolName);

};

