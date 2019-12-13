/*
Uebung:				2
Autoren:			Tim Depping
Matrikelnummer:		20206723
Studiengang:		Informatik
*/

#include "functions.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
	printACSIITable();

	int a, b, c;
	printf("\nInput three different integers:");
	scanf_s("\n%i %i %i", &a, &b, &c);
	printf("\nSum is %i", sum(a, b, c));
	printf("\nAverage is %f", average(a, b, c));
	printf("\nProduct is %i", product(a, b, c));
	printf("\nSmallest is %i", smallest(a, b, c));
	printf("\nLargest is %i", largest(a, b, c));
	return 0;
}