/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	if (str == NULL) return NULL; // if the string is a null string

	int i, j = 0, sIndex = 0, lIndex = 0;
		


	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' &&j == 0)// checking for  the initial index of the string
		{
			j = 1;
			sIndex = i;

		}
		else if (str[i] == ' '  && j == 1)// checking for the end index of the string if there are spaces after the end word
		{
			j = 0;
			lIndex = i;
		}

		if (str[i] != ' ' && str[i + 1] == '\0' && j == 1)// checking for the end index of the string if the EOF is'\0'
		{
			lIndex = i;
		}

	}

	if (j == 0)     // if the given string is an empty string returning empty string
		return "";


	char *last = (char *)calloc(lIndex - sIndex + 2, sizeof(char));
	j = 0;
	for (i = sIndex; i <= lIndex; i++)
	{
		last[j++] = str[i];

	}

	last[j] = '\0';

	return last;
}
