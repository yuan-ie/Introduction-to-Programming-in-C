//Angela Nghiem, 001
//Lab 5 - using pointers
//GOALS: pointers and parameters
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void doubleMe(int *x)
{
	*x = *x * 2;
}

void swap(double *a, double *b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void firstLast(char theString[], char *first, char *last)
{
	int i;
	int length = strlen(theString);
	int temp;
	*first = theString[0];
	*last = theString[0];
	for(i = 0; i < length; i++)
	{
		if(*first > theString[i])
		{
			*first = theString[i];
		}
		if(*last < theString[i])
		{
			*last = theString[i];
		}
	}
}

void main(void)
{
	int x = 10;
	double a = 1;
	double b = 7;
	char theString[] = "pancake";
	char first;
	char last;
	
	printf("first, x is %d\n", x);
	doubleMe(&x);
	printf("now, x is %d\n\n\n", x);
	printf("a is %lf, b is %lf\n", a, b);
	swap(&a,&b);
	printf("now, a is %lf, b is %lf\n\n\n", a, b);
	printf("the word is %s\n", theString);
	firstLast(theString,&first,&last);
	printf("first is %c, last is %c\n", first, last);
}
