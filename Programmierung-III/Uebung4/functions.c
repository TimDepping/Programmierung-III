/*
Uebung:				4
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#include <stdio.h>
#include <math.h>

int wurzel(double p, double q, double* x1, double* x2)
{
	int status;
	double p2 = -p / 2;
	double D = p2 * p2 - q;

	if (D >= 0.0)
	{
		// Reell
		double sq = sqrt(D);
		*x1 = p2 + sq;
		*x2 = p2 - sq;
		status = 1;
	}
	else
	{
		// Komplex
		*x1 = p2;
		*x2 = sqrt(-D);
		status = 0;
	}
	return status;
}

void ausgabe(int status, double p, double q, double x1, double x2)
{
	if (status == 1)
		printf("\np = %f  q = %f, x1 = %f  x2 = %f", p, q, x1, x2);
	else
		printf("\np = %f  q = %f, x12 = %f %c i  %f", p, q, x1, 241, x2);
}

int siebDesEratosthenes(int maxWert, int* primzahlen)
{
	
	for (int i = 0; i < maxWert; i++) 
	{
		primzahlen[i] = i + 1;
	}
	primzahlen[0] = 0;

	for (int i = 0; i < maxWert; i++)
	{
		if(primzahlen[i] != 0)
		{
			int primzahl = primzahlen[i];
			for(int j = i + 1; j < maxWert; j++)
			{
				if (primzahlen[j] % primzahl == 0)
				{
					primzahlen[j] = 0;
				}
			}
		}
	}
	
	return 1;
}