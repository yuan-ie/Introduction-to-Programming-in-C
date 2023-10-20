//program to test stuff
#include <stdlib.h>
#include <stdio.h>
void main(void)
{
	int num1, num2;
	int sum;
	printf("Enter an integer:");
	scanf ("%d", &num1);
	printf("Enter another integer:");
	scanf ("%d", &num2);
	sum = num1 + num2;
	printf("The sum of %d and %d is %d\n", num1, num2, sum);
}
