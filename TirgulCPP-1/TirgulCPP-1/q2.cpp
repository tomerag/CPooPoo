#include "q2.h"

char* sum(char* str1, char* str2, char* str3)
{
	int stringsLen = strlen(str1) + strlen(str2) + strlen(str3) + 1;
	char* res = new char[stringsLen];
	strcpy(res, str1);
	if (str2 != NULL)
		strcat(res, str2);
	if (str3 != NULL)
		strcat(res, str3);
	return res;
}