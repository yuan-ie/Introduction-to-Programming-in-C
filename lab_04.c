//Angela Nghiem, Section 001, Lab4
//Raising integers to a power
//GOAL: subroutine

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
double myPower(double base, int exp)
{
	double base2;
	double retval;
	int i;

	if(base == 0 && exp >= 0)
	{
		retval = 0.0;
	}
	else if(base == 0.0 && exp < 0)
	{
		retval = INFINITY;
	}
	else if(base != 0.0 && exp == 0)
	{
		retval = 1.0;
	}
	else if (exp == 1)
	{
		retval = base;
	}
	else if(base != 0.0 && exp < 0)
	{
		if (exp == -1)
		{
		retval = 1.0 / base;
		}
		else
		{
			base = 1.0 / base;
			base2 = base;
			for (i = -2; i >= exp; i--)
			{
				retval = base * base2;
				base2 = retval;
			}
		}
	}
	else
	{
		base2 = base;
		for (i = 2; i <= exp; i++)
		{
			retval = base * base2;
			base2 = retval;
		}
	}
	// printf("The return value for base = %lf and exp = %d is %lf\n", base, i, retval);
	return(retval);
}

void main(void)
{
	double base;
	int exp;
	double retval;

	printf("Choose a number for your base:\n");
	scanf("%lf", &base);
	printf("Choose a number for your exponent:\n");
	scanf("%d", &exp);
	retval = myPower(base, exp);
	printf("Your return value for base = %lf and exp = %d is %lf\n", base, exp,
	retval);
}
