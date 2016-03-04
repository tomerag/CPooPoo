#include "q1.h"

void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}

int& find(int arr[], int size, int& toFind)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == toFind)
			return arr[i];
		else
			return toFind;
	}
}
