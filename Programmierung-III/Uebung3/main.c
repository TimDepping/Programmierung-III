/*
Uebung:				3
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#include "functions.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
	for(int i = 0; i < 100; i++)
	{
		printf("\n%i", powerNonRecursive(2, i));
		printf("\n%i", powerRecursive(2, i));
	}
    return 0;
}