/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){

	if (str == NULL) return -1;

	if (word == NULL) return 0;

	int i = 0, j = 0, count = 0 ,flag,len;

	for (i = 0; word[i]; i++);

	 len = i;
	
	
	i = 0;
	while (str[i])
	{
		flag = 0;
		for (j = 0; j < len; j++){// comparing string  with the given  word
			if (str[i + j] != word[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			count++;

		}

		i++;

	}



	return count;
}


int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

