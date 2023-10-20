//angela nghiem, section 001
//lab2 - fibonacci numbers
//GOAL: for-statements
#include <stdlib.h>
#include <stdio.h>
void main(void)
{
	int oneBack = 1;
	int twoBack = 0;
	int i, fibo;
	double ratio;
	fibo = 1;
	ratio = (double)fibo / (double)oneBack;

	printf("f(0) = 1. Ratio is undefined.\n");
	printf("f(1) = 1. Ratio is %lf.\n", ratio);

	for (i = 2; i < 21; i++)
		{
		fibo = oneBack + twoBack;
		ratio = (double)fibo / (double)oneBack;
		printf("f(%d) is %d. Ratio is %lf.\n", i, fibo, ratio);
		twoBack = oneBack;
		oneBack = fibo;
	}
}
