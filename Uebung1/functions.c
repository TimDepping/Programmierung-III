/*
Uebung:				1
Autoren:			Tim Depping
Matrikelnummer:		20206723
Studiengang:		Informatik
*/

#include <math.h>

int berechneGuthaben(int kapital, double jahreszins, int jahre)
{
	return kapital * pow((1 + jahreszins / 100), jahre);
}

int berechneRestschuld(int summe, double jahreszins, double tilgungsrate, int jahre)
{
	int restschuld = summe;
	int tilgung = summe * (jahreszins + tilgungsrate) / 100;

	for (int k = 0; k < jahre; k++)
		restschuld = restschuld - (tilgung - restschuld * jahreszins / 100);
	return restschuld;
}

int berechneZinsesZins(int kapital, double jahreszins, int jahre)
{
	for (int k = 0; k < jahre; k++)
		kapital *= 1 + jahreszins / 100;
	return kapital;
}
