#include <stdio.h>
void main()
{
	int breite = 15;
	int i = 0;
	int j = 0;

	int positionErstesZeichen = 0;
	int positionZweitesZeichen = breite - 3;

	for (i = 0; i < breite; i++)
	{
		printf("x");
	}
	printf("\n");



	for (i = 1; i <= breite - 2; i++)
	{
		printf("x");

		for (j = 0; j < breite - 2; j++)
		{
			if (j == positionErstesZeichen || j == positionZweitesZeichen)
			{
				printf("x");
			}
			else
			{
				printf("-");
			}
		}

		printf("x");
		printf("\n");

		positionErstesZeichen++;
		positionZweitesZeichen--;
	}

	for (i = 0; i < breite; i++)
	{
		printf("x");
	}

	getchar();
}