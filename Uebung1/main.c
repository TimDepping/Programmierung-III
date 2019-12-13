/*
Uebung:				1
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#include "functions.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int k = 10000000;
	double z = 0.1;
	int j = 8;

	printf(
		"\nMit einem Anfangskapital von %i Cent und einem Jahreszins von %f Prozent besitzt man nach %i Jahren ein Guthaben von %i Cent.",
		k, z, j, berechneGuthaben(k, z, j));

	printf("\nDas Guthaben nach der korrekten Berechnung des Zinseszins betraegt %i Cent.", berechneZinsesZins(k, z, j));
	
	k = 4000000;
	z = 2.5;
	double t = 1.0;
	printf("\nMit einem Kreditvolumen von %i cent, einem Schuldzins von %f Prozent und einer Tilgungsrate von %f Prozent betraegt die Restschuld %i.", k, z, t, berechneRestschuld(k, z, t, j));
	
	return 0;
}
