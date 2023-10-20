//angela nghiem, 001
//lab 7 - factors
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i, n, r;
	int factor;
	factor = 0;
	n = 1;
	for (i = 1; i <= 100; i++)
	{
		for (n = 1; n <= i; n++)
		{
			if (i % n == 0)
			{
			factor++;
		}
	}
	
	printf("%3d:(%2d) ", i, factor);
	factor = 0;
	n = 1;
	
	while (n <= i-1)
	{
		if (i % n == 0)
		printf("%d,", n);
		n++;
	}
	
	printf("%d\n", n);
	}
}
