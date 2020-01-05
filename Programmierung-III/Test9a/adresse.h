/*
Test:				9
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/
#include <iostream>
using namespace std;

#ifndef _H_ADRESSE
#define _H_ADRESSE

class Adresse
{
public:
	static const double id;
private:
	/* Instanzvariablen */
	string StrasseNr;
	string PLZStadt;
public:
	/* Konstruktoren */
	Adresse() {}
	Adresse(const string StrasseNr, const string PLZStadt);
	Adresse(const Adresse& kt);
	~Adresse() { }
	void setStrasseNr(string StrasseNr) { this->StrasseNr = StrasseNr; }
	string getStrasseNr() const { return StrasseNr; }
	void setPLZStadt(string PLZStadt) { this->PLZStadt = PLZStadt; }
	string getPLZStadt() const { return PLZStadt; }
	/* Methoden */
	// E/A über Streams
	friend ostream& operator << (ostream& s, const Adresse& z);
	friend istream& operator >> (istream& s, Adresse& z);

};
#endif