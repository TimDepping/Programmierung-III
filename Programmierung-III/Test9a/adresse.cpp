/*
Test:				9
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/
#include <string>
#include "adresse.h"

const double Adresse::id = 1.0l;

/* Konstruktoren */
Adresse::Adresse(const string StrasseNr, const string PLZStadt)
{
	this->StrasseNr = StrasseNr;
	this->PLZStadt = PLZStadt;
}

Adresse::Adresse(const Adresse& adr)
{
	this->StrasseNr = adr.StrasseNr;
	this->PLZStadt = adr.PLZStadt;
}

// E/A über Streams
ostream& operator << (ostream& s, const Adresse& adr)
{
	return s << adr.getStrasseNr() << " " << adr.getPLZStadt() << endl;
}

istream& operator >> (istream& s, Adresse& z)
{
	string strasseNr, PLZStadt;
	s >> strasseNr >> PLZStadt;
	z = Adresse(strasseNr, PLZStadt);
	return s;
}


