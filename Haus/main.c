#include <stdio.h>
void main()
{
	int breite = 15;
	int i = 0;
	int j = 0;

	int positionErstesZeichen = 0;
	int positionZweitesZeichen = breite - 3;

	char zeichenLeer = ' ';
	char zeichenHaus = 'x';

	for (i = 0; i < breite; i++)
	{
		printf("%c", zeichenHaus);
	}
	printf("\n");



	for (i = 1; i <= breite - 2; i++)
	{
		printf("%c", zeichenHaus);

		for (j = 0; j < breite - 2; j++)
		{
			if (j == positionErstesZeichen || j == positionZweitesZeichen)
			{
				printf("%c", zeichenHaus);
			}
			else
			{
				printf("%c", zeichenLeer);
			}
		}

		printf("%c", zeichenHaus);
		printf("\n");

		positionErstesZeichen++;
		positionZweitesZeichen--;
	}

	for (i = 0; i < breite; i++)
	{
		printf("%c", zeichenHaus);
	}

	getchar();
}