/*
Uebung:				5
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/


#include "functions.h"
#include <stdio.h>
int main(int argc, char* argv[])
{

	char* zk = "1234";

	printf("\n\"%s\" to  %i", zk, zeichenkette2zahl(zk));

	int z = 12345;
	char* zk2[6];
	int nzk = 5;
	printf("\n %i  to \"%s\"", z, zahl2zeichenkette(z, zk2, nzk));

	char* tests[9];
	tests[0] = "Radar";
	tests[1] = "Lagerregal";
	tests[2] = "Ein Esel lese nie.";
	tests[3] = "O Genie, der Herr ehre Dein Ego.";
	tests[4] = "aba";
	tests[5] = "abba";
	tests[6] = ".a b, ba!";
	tests[7] = "hello world!";
	tests[8] = "just works!";
	for (int i = 0; i < 9; i++)
	{
		char* zk = tests[i];
		int j = 0;
		while (zk[j]) j++;
		printf("\n\"%s\" is a palindrom: %i.", zk, palindrom(zk, j));
	}
	
	return 0;
}