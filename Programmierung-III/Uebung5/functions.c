/*
Uebung:				5
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#include "functions.h"

char* zahl2zeichenkette(int z, char* zk, int nzk)
{
	for (int i = 0; i < nzk; i++)
	{
		zk[nzk - 1 - i] = z % 10 + '0';
		z /= 10;
	}
	zk[nzk] = '\0';
	return zk;
}

int zeichenkette2zahl(char* zk)
{
	int num = 0;
	int num_of_chars = 0;
	int pow = 1;
	while (zk[num_of_chars] != '\0') num_of_chars++;
	for (int i = 0; i < num_of_chars; i++)
	{
		num += (zk[num_of_chars - 1 - i] - '0') * pow;
		pow *= 10;
	}
	return num;
}



// Checks if the given zk is a palindrom
// zk is the string to check
// l is the length of the string
int palindrom(char* zk, int l)
{
	// If l is 0 or 1 the given string is palindrom
	if (l == 0 || l == 1) return 1;

	char first = toLowerCase(zk[0]), last = toLowerCase(zk[l - 1]);

	// Checks if the first character is valid. If this is not the case it will not be compared with the last character.
	if (!isValidChar(first))
	{
		//printf("\nFirst Character is invalid.");
		return palindrom(zk + 1, l - 1);
	}

	// Checks if the last character is valid. If this is not the case it will not be compared with the first letter.
	if (!isValidChar(last))
	{
		//printf("\nLast Character is invalid.");
		return palindrom(zk, l - 1);
	}


	// Compares the first and the last character.
	if (first == last)
	{
		return palindrom(zk + 1, l - 2);
	}
	return 0;
}

int isValidChar(char c)
{
	// Checks if the character is not valid.
	if (c == ' ' || c == '.' || c == ',' || c == '!') return 0;

	return 1;
}

char toLowerCase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return c;
}