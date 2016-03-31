/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void reverse(char *input, int len) {
	int i = 0, j = len - 1;
	char temp;
	while (i<j)
	{
		temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++; j--;
	}


}

void str_words_in_rev(char *input, int len){
	
	int i = 0, j = 0;
	reverse(input,len);
	while(*(input + i) !='\0') {
		if (*(input + j) == ' ' || *(input+j) == '\0') 
		{
			reverse(input + i, j - i);
			i = j + 1;
		}
		j++;
	}

	}
