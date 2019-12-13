/*
Uebung:				3
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#include "functions.h"
#include <limits.h>

int multiplication(int a, int b)
{
	int c = INT_MAX;

	if (b == 0) return 0;

	if (c / b > a)
	{
		return a * b;
	}
	
	return -1;
}


int powerRecursive(int x, int p)
{
	int result = 1;

	if (x == 0) return 0;
	
	if (p > 0) {
		int previous = powerRecursive(x, p - 1);
		if (previous != -1) {
			result = multiplication(previous, x);
		} else
		{
			result = -1;
		}
	}
	return result;
}

int powerNonRecursive(int x, int p)
{
	if (x == 0) return 0;

	if (p == 0) return 1;

	int result = 1;

	while (p-- && result != -1)
	{
		result = multiplication(result, x);
	}
	return result;
}
