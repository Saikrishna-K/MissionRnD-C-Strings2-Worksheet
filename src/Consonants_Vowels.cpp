/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels){

	

	int i = 0, value;
	*consonants = 0, *vowels = 0;
	if (str!=NULL)
	while (str[i] != '\0')
	{
		value = str[i] - '`';// SUBTRACTING SMALL ALPHABET FROM '`' TO GET 1 TO 26 NUMBER, IF
		             
		if (value < 1)        // IF A CAPITAL ALPHABET OCCURS THE SUBTRACTING THE SAME ALPHABET USING '@' TO GET 1 TO 26 NUMBER;
			value = str[i] - '@';

		if (value == 1 || value == 5 || value == 9 || value == 15 || value == 21)
		{
			(*vowels)++;

		}
		else if (value >0 && value < 27)
		{
			(*consonants)++;

		}

      i++;
	}


}
