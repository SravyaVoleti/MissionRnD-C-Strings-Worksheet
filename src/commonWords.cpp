/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31


void copy(char *s1, char *s2) {
	int i;
	for (i = 0; *(s1+i) != '\0'; ++i)
	{
		*(s2 + i) = *(s1 + i);
	}
	*(s2+i) = '\0';
}
int length(char *str) {
	int i = 0;
	while (*(str + i) != '\0')
		i++;
	return i;
}

int compare(char *str1, char *str2) {
	int i = 0;
	if (length(str1) == length(str2)) {
		while (*(str1 + i) != '\0') {
			if (*(str1 + i) != *(str2 + i))
				return 0;
		}
		return 1;
	}
	else
		return 0;
}

char ** commonWords(char *str1, char *str2) {
	
	int i,j,l1,l2,space1[10],space2[10],s1,s2,w1,w2,c = 0,k=0,j1;
	char words1[10][10], words2[10][10], **common = {NULL};

	if (str1 == NULL && str2 == NULL)
		return NULL;
	l1 = length(str1);
	l2 = length(str2);
	for (i = 0,s1 = 0; i < l1; i++,s1++) {
		if (*(str1 + i) == ' ')
			space1[s1] = i;
	}
	for (i = 0, s2 = 0; i < l2; i++, s2++) {
		if (*(str2 + i) == ' ')
			space2[s2] = i;
	}
	for (w1 = 0; w1 < s1; w1++) {
		j1 = 0;
		while (k < space1[w1]) {
			words1[w1][j1] = str1[k];
			j1++;
			k++;
		}
		k = k+1;
	}
	k = 0;
	for (w2 = 0; w2 < s2; w2++) {
		j1 = 0;
		while (k < space2[w2]) {
			words1[w2][j1] = str1[k];
			j1++;
			k++;
		}
		k = k+1;
		}
	for (i = 0; i < w1; i++) {
		for (j = 0; j < w2; j++) {
			if (compare(words1[i],words2[j])) {
				
				common[c] = (char *)calloc(1, sizeof(length(words1[i])));
				copy(common[c], words1[i]);
				c++;
			}
		}
	}
	
	return common;
}