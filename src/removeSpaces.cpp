/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {

	int i = 0,j = 0;

	if (str == " " || str == '\0')
		return '\0';
	if (*str == ' ')
		return '\0';
	while (str[i]!= '\0')
	{
		if (str[i] == ' ') {
			j = i;
			while (str[j] != '\0') {
				str[j] = str[j+1];
				j++;
			}
			str[j] = '\0';
		}
		if (str[i] != ' ')
			i++;
	}


	return *str;
}