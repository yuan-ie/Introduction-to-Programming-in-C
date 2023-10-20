//angela nghiem, section 001
//lab1 - socks
//GOAL: if-statements
#include <stdlib.h>
#include <stdio.h>
void main(void)
{
	system("@cls||clear");
	int red, green, yellow, orange, blue;
	char color1, color2;
	double chance;

	/*------------------------------------------------------*/
	//how many color socks will the user put in the drawer?
	printf("You have so many different colored socks:\nRed, green, yellow, orange,
	and blue.\nLet's put them all away in your drawer!\n");
	printf("Let's start with one color.\nHow many red socks will you put in the
	drawer?\n");

	scanf("%d", &red);
	if (red < 0)
	{
		printf("You can't do that.\n");
		return;
	}

	printf("How about green?\n");
	scanf("%d", &green);

	if (green < 0)
	{
		printf("You can't do that.\n");
		return;
	}

	printf("Yellow?\n");
	scanf("%d", &yellow);

	if (yellow < 0)
	{
		printf("You can't do that.\n");
		return;
	}

	printf("Orange?\n");
	scanf("%d", &orange);
	
	if (orange < 0)
	{
		printf("You can't do that.\n");
		return;
	}

	printf("And blue?\n");
	scanf("%d", &blue);
	
	if (blue < 0)
	{
		printf("You can't do that.\n");
		return;
	}

	/*------------------------------------------------------*/
	//favorite color question
	printf("\nWhich two colors are your favorite? Only type the first letter of both
	colors.\n(It cannot be the same letter. Choose from [r, g, y, o, b])\n");
	printf("\nFirst color?\n");
	scanf("\n%c", &color1);
	printf("\nSecond color?\n");
	scanf("\n%c", &color2);

	while (color1 == color2)
	{
		printf("Can't be the same letter.\n");
		scanf("\n%c", &color2);
	}

	/*------------------------------------------------------*/
	//probability
	//color1
	if (color1 == 'r' || color1 == 'R')
	{
		color1 = red;
		printf("red\n");
	}

	if (color1 == 'g' || color1 == 'G')
	{
		color1 = green;
		printf("green\n");
	}

	if (color1 == 'y' || color1 == 'Y')
	{
		color1 = yellow;
		printf("yellow\n");
	}
	
	if (color1 == 'o' || color1 == 'O')
	{
		color1 = orange;
		printf("orange\n");
	}
	
	if (color1 == 'b' || color1 == 'B')
	{
		color1 = blue;
		printf("blue\n");
	}
	
	//color2
	if (color2 == 'r' || color2 == 'R')
	{
		color2 = red;
		printf("red\n");
	}
	
	if (color2 == 'g' || color2 == 'G')
	{
		color2 = green;
		printf("green\n");
	}
	
	if (color2 == 'y' || color2 == 'Y')
	{
		color2 = yellow;
		printf("yellow\n");
	}
	
	if (color2 == 'o' || color2 == 'O')
	{
		color2 = orange;
		printf("orange\n");
	}
	
	if (color2 == 'b' || color2 == 'B')
	{
		color2 = blue;
		printf("blue\n");
	}

	chance = ((double)color1 + (double)color2) / ((double)red + (double)green +
	(double)yellow + (double)orange + (double)blue);
	printf("What if you closed your eyes and tried pulling out socks of your favorite
	color?\n");
	printf("The probability of you pulling these socks from the drawer is:\n(%d + %d)
	/ (%d + %d + %d + %d + %d) = %lf.\n", color1, color2, red, green, yellow, orange,
	blue, chance);
}
