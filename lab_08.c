//angela nghiem, 001
//lab 8 - lamps
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i, run, n;
	run = 1;
	printf("Enter an amount of lamps (greater than 0): \n");
	scanf("%d", &n);

	while(n <= 0)
	{
		printf("Invalid number. Enter a number greater than 0: \n");
		scanf("%d", &n);
	}
	printf("You run pass %d lamps, while pulling each string,\ntherefore turning on
	each lamp. (1 = on, 0 = off)\n", n);
	int lamp[n];
	printf("\nRun %3d: ", run);

	for(i = 1; i <= n; i++)
	{
		lamp[i] = 1;
		printf("%d ", lamp[i]);
	}

	printf("\n");

	// EVERYTHING IS FINE HERE
	int multiple;
	int m;
	printf("Then you run pass every lamp, pulling every string\nthat is a multiple of
	the number of runs.\n");

	for(run = 2; run <= n; run++)
	{
		printf("\nRun %3d: ", run);
		for (m = 1; m <= n; m++)
		{
			multiple = run * m;
			if(multiple <= n)
			{
				// printf("\n(%d)\n", multiple);
				if (lamp[multiple] == 0)
				{
					lamp[multiple] = 1;
					// printf("is now %d", lamp[multiple]);
				}
				else if (lamp[multiple] == 1)
				{
					lamp[multiple] = 0;
					// printf("is now %d", lamp[multiple]);
				}
			}
		}
		for(i = 1; i <= n; i++)
		{
			printf("%d ", lamp[i]);
		}
	}
	printf("\n");
}
