#include "q1.h"

void main()
{
	int arr[] = { 1, 6, 34, 28, 73 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int seek, replace;
	bool fContinue = true;
	while (fContinue)
	{
		cout << "This is the array: ";
		printArr(arr, size);
		cout << "Please give a number to seek (-1 to end): ";
		cin >> seek;
		if (seek != -1)
		{
			cout << "Please give a number to replace: ";
			cin >> replace;
			find(arr, size, seek) = replace;
		}
		else
			fContinue = false;
	}
}
