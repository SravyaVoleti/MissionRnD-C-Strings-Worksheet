/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
int len(char *str) {
	int i = 0;
	while (*(str + i) != '\0')
		i++;
	return i;
}

char KthIndexFromEnd(char *str, int K) {

	int l;
	if (str == " " || str == '\0')
		return '\0';
	l = len(str);
	if (K < 0 || K > l )
	return '\0';
	return *(str + l - K - 1);

}