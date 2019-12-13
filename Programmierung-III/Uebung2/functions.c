/*
Uebung:				2
Autoren:			Tim Depping
Matrikelnummer:		20206723
Studiengang:		Informatik
*/


#include <stdio.h>

void printHorizontalLine(int numberOfColumns, char FirstChar, char lastChar, char separator)
{
	char h = 196;
	printf("\n%c", FirstChar);
	for (int i = 0; i < numberOfColumns - 1; i++)
	{
		printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
			h, h, h, h, h, h, h, h, h, h, h, h, h, h, separator);
	}
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
		h, h, h, h, h, h, h, h, h, h, h, h, h, h, lastChar);
}

void printACSIITable()
{
	char v = 179;
	printHorizontalLine(4, 218, 191, 194);

	printf("\n%c", v);
	for (int c = 0; c < 4; c++)
		printf("  dez  hex  z %c", v);

	printHorizontalLine(4, 195, 180, 197);

	for (int d = 0, c = 32; d < 224; d += 4, c += 4)
	{
		printf("\n%c %4d %3x %3c %c  %3d %3x %3c %c  %3d %3x %3c %c  %3d %3x %3c %c",
			179, c, c, c, 179, c + 1, c + 1, c + 1, 179, c + 2, c + 2, c + 2, 179, c + 3, c + 3, c + 3, 179);
	}

	printHorizontalLine(4, 192, 217, 193);
}
