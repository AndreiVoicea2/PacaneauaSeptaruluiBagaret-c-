#include "Symbol.h"

Symbol::Symbol()
{

	SetIndex(0);
	SetChance(0);
	SetValue(0);
	SetSymbolName("Default_SymbolName");

}

Symbol::Symbol(unsigned short int _index , unsigned short int _chance , unsigned int _value, string _SymbolName)
{

	SetIndex(_index);
	SetChance(_chance);
	SetValue(_value);
	SetSymbolName(_SymbolName);

}

void Symbol :: SetIndex(unsigned short int _index)
{
	index = _index;
}

void Symbol :: SetSymbolName(string _SymbolName)
{

	SymbolName = _SymbolName;

}

void Symbol::SetChance(unsigned short int _chance)
{
	chance = _chance;
}

void Symbol::SetValue(unsigned int _value)
{
	value = _value;
}

unsigned short int Symbol :: GetIndex()
{
	return index;
} 

string Symbol::GetSymbolName()
{
	return SymbolName;
}

unsigned short int Symbol::GetChance()
{
	return chance;
}

unsigned int Symbol::GetValue()
{
	return value;
}