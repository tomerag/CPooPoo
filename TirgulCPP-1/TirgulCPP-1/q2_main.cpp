#pragma warning (disable: 4996)
//This statement is written to avoid such warnings:
//warning C4996: 'strcpy': This function or variable may be unsafe. 
#include "q2.h"

void main()
{
	char* longWord;

	longWord = sum("hello");
	cout << "longWord=|" << longWord << "|\n";
	delete[]longWord;

	longWord = sum("abra", " kadabra");
	cout << "longWord=|" << longWord << "|\n";
	delete[]longWord;

	longWord = sum("shalom", " kita", " alef");
	cout << "longWord=|" << longWord << "|\n";
	delete[]longWord;
}
