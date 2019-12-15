/*
Uebung:				4
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#include "functions.h"
#include  <stdio.h>

int main(int argc, char* argv[])
{
	// Quadratische Gleichung

	int status;
	double p = 1.0, q = 1.0;
	double x1, x2;
	status = wurzel(p, q, &x1, &x2);
	ausgabe(status, p, q, x1, x2);
	p = 2.0;
	status = wurzel(p, q, &x1, &x2);
	ausgabe(status, p, q, x1, x2);
	p = 4.0;
	status = wurzel(p, q, &x1, &x2);
	ausgabe(status, p, q, x1, x2);

	// Primzahlen
	
	int max = 1009;
	int array[1009];

	siebDesEratosthenes(max, array);

	for(int i = 0; i < max; i++)
	{
		if( array[i] != 0)
			printf("\n%i", array[i]);
	}

}