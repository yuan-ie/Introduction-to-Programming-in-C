//angela nghiem, 001
//lab 6 - average and standard dev of height and weight
//GOALS: structs, opening file
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define MAX 100

typedef struct Person
{
	double height;
	double weight;
} Person;

int getData(FILE *input, Person people[])
{
	double h, w;
	int i, c;
	int numPeople, count;
	count = 0;
	i = 0;
	input = fopen("values.dat", "r");

	if (input == NULL)
	{
		printf("file not recognized.\n");
		exit(0);
	}
	//SCANS FILE TO COUNT LINES WHILE ALSO DISPLAYING LIST USING STRUCT
	c = fscanf(input, "%lf %lf", &h, &w);
	while (c > 0)
	{
		count = count + 1;
		printf("person %d: %lf %lf\n", i+1, h, w);
		people[i].height = h;
		people[i].weight = w;
		c = fscanf(input, "%lf %lf", &h, &w);
		i++;
	}
	//COUNTS LINES TO EQUAL NUMBER OF PEOPLE
	//printf("there are %d lines.\n", count);
	fclose(input); //close file since it's not needed anymore
	numPeople = count;
	if(numPeople > MAX)
	{
		printf("List too long. Max number of people is 100.");
		exit(0);
	}
	return(numPeople);
}
void getAverages(Person people[], double *aveHeight, double *aveWeight, int
numPeople)
{
	int i;
	double height, weight, h, w;
	height = 0;
	weight = 0;

	for(i = 0; i < numPeople; i++)
	{
		height = people[i].height + height;
		weight = people[i].weight + weight;
		//printf("%lf + %lf\n", people[i].height, height);
	}
	*aveHeight = height / i;
	*aveWeight = weight / i;
}

void getStandardDevs(Person people[], double aveHeight, double aveWeight, double *stdHeight, double *stdWeight, int numPeople)
{
	//std = sqrt( sum( (x[i] - xbar)**2 ) / (n-1) )
	double sumH, sumW, diffH, diffW;
	int i;
	sumH = 0;
	sumW = 0;
	//printf("%lf %lf\n", aveHeight, aveWeight);
	for (i = 0; i < numPeople; ++i)
	{
		diffH = people[i].height - aveHeight;
		diffW = people[i].weight - aveWeight;
		//printf("%lf = %lf - %lf, %lf = %lf - %lf\n", diffH, people[i].height,
		aveHeight, diffW, people[i].weight, aveWeight);
		//SQUARE IT
		diffH = diffH * diffH;
		diffW = diffW * diffW;
		// ADD ALL OF THE VALUES AFTER SQUARING
		sumH = sumH + diffH;
		sumW = sumW + diffW;
	}
	//FINDING NEW AVERAGE
	sumH = sumH / i;
	sumW = sumW / i;
	//SQRT THE AVERAGE
	*stdHeight = sqrt(sumH);
	*stdWeight = sqrt(sumW);
	//printf("the sqrt of %lf is %lf, and %lf is %lf\n", sumH, stdHeight, sumW, stdWeight);
}

void main(void)
{
	char filename[] = "values.dat";
	FILE *input;
	Person people[MAX];
	int numPeople;
	double aveHeight, aveWeight, stdHeight, stdWeight;
	int i;
	double data;
	//DISPLAY LIST AND GET NUMBER OF PEOPLE IN LIST
	printf("LIST OF HEIGHTS AND WEIGHTS [%s]\n\n", filename);
	numPeople = getData(input, people);
	//MAKING SURE THE STRUCT IS RIGHT
	/*
	for (int i = 0; i < numPeople; ++i)
	{
	printf("%lf, %lf\n", people[i].height, people[i].weight);
	}
	printf("%lf\n", people[3].height);
	*/

	//GET AVERAGES AND STANDARDDEVS
	getAverages(people, &aveHeight, &aveWeight, numPeople);
	getStandardDevs(people, aveHeight, aveWeight, &stdHeight, &stdWeight, numPeople);
	printf("\n");
	printf("The average of the heights is %lf\n", aveHeight);
	printf("The average of the weights is %lf\n", aveWeight);
	printf("The standard deviation of the heights is %lf\n", stdHeight);
	printf("The standard deviation of the weights is %lf\n", stdWeight);
}
