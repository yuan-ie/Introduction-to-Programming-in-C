//Angela Nghiem, 001
//Lab 03 - Guess
//GOAL: while-statements (conditional inside conditional)
#include <stdio.h>
#include <stdlib.h>
void main(void)
{
	int guess;
	char sym;
	int max = 101;
	int min = 1;

	printf("Hello! Let's play a game. You think of a number from 1-100, but do not
	enter it!\n");
	printf("Then, I will guess your number.\n");
	guess = (max - min) / 2;
	printf("My guess is %d. Is your number >, <, or = to my guess?\n", guess);
	scanf(" %c", &sym);

	while(sym != '=')
	{
		if (sym == '<')
		{
			max = guess;
			guess = (max + min) / 2;
			printf("What about %d? Is your number >, <, or = to my guess?\n", guess);
			scanf(" %c", &sym);
		}
		else if (sym == '>')
		{
			min = guess;
			guess = (max + min) / 2;
			printf("What about %d? Is your number >, <, or = to my guess?\n", guess);
			scanf(" %c", &sym);
		}
		else
		{
			printf("Sorry. I don't quite understand that. Please input <, >, or =.\n");
			scanf(" %c", &sym);
		}
	}
	printf("Yay I won!\n");
}
