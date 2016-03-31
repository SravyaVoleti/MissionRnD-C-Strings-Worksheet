/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

int power(int x,int y) {
	int p = 1;
	for (int i = 0; i < y; i++) {
		p =  p * x;
	}
	return p;
}

int length(int n) {
	int c = 0;
	while (n > 0) {
		n = n / 10;
		c++;
	}
	return c;
}
void number_to_str(float number, char *str,int afterdecimal){

	int num,i = 0,len,x,l1,len1,c = 0;
	float afterdec;
	if (number < 0) {
		*(str + c) = '-';
		c++;
	}
	num = number;
	afterdec = number - num;
	int ad = afterdec *power(10, afterdecimal);
	len = length(num);
	l1 = len - 1;
	for (i = c; i < len; i++) {
		*(str+i) = (num / power(10, l1) )+ '0';
		num = num % power(10, l1);
		l1--;
	}
	*(str + len) = '.';
	len1 = length(ad);
	l1 = len1 - 1;
	for (i = len+1 ; i < len+len1; i++) {
		*(str + i) = (ad / power(10, l1) )+ '0';
		ad = ad % power(10, l1);
		l1--;
	}
	*(str + len + len1) = '\0';
	
}
