/*
Leon Geim

Problem: Erkennen der Logik, dass es nur 2 sich bewegende Elemente gibt, bei der 1 immer um 1 nach rechts
und 1 immer um 1 nach links wandert.
*/


#include <stdio.h>
void main()
{
	int breite = 15;
	int i = 0;
	int j = 0;

	int positionErstesZeichen = 0;
	int positionZweitesZeichen = breite - 3;

	char zeichenLeer = '-';
	char zeichenHaus = 'x';

	//For-Schleife für das Dach
	for (i = 0; i < breite; i++)
	{
		printf("%c", zeichenHaus);
	}
	printf("\n");


	//Variabler Mittelteil
	for (i = 1; i <= breite - 2; i++)
	{
		//Linke Wand
		printf("%c", zeichenHaus);

		//breite - 2 da linke und rechte Wand fest sind
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

		//Rechte Wand
		printf("%c", zeichenHaus);
		printf("\n");

		positionErstesZeichen++;
		positionZweitesZeichen--;
	}

	//For-Schleife für den Boden
	for (i = 0; i < breite; i++)
	{
		printf("%c", zeichenHaus);
	}

	getchar();
}