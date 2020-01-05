/*
Test:				9
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/
#include <iostream>
#include <string>
#include "Stadt.h"
#include "adresse.h"
#include "person.h"
using namespace std;

Person1::Person1(string name, int alter,
	string stname, int ez,
	string StrasseNr, const string PLZStadt)
	: Stadt(stname, ez), Adresse(StrasseNr, PLZStadt)
{
	setName(name);
	setAlter(alter);
}

Person1::Person1(const Person1& st)
{
	if (this != &st)
	{
		*this = st;
	}
	else {
		throw string("Kopie nicht zulässig!");
	}
}

ostream& operator << (ostream& s, const Person1& z)
{
	if (typeid(s) == typeid(cout))
	{
		s << "Person = {" << z.getName() << ", " << z.getAlter() << "}" << endl;
		//s << (Stadt)z << (Adresse)z;
		s << static_cast<Stadt>(z) << static_cast<Adresse> (z);
	}
	else
	{
		s << z.getName() << " " << z.getAlter() << " ";
		//s << (Stadt)z << (Adresse)z;
		s << static_cast<Stadt>(z) << static_cast<Adresse> (z);
	}
	return s;
}

istream& operator >> (istream& s, Person1& z)
{
	//string pname, name, str, plz;
	//int alter, ez;
	if (typeid(s) == typeid(cin))
	{
		cout << "Geben Sie Namen und Alter der Person ein:" << endl;
		s >> z.Name >> z.Alter;
		cout << "Geben Sie Namen und Einwohnerzahl der Stadt ein: " << endl;
		//s >> name >> ez;
		s >> *(dynamic_cast<Stadt*>(&z));
		cout << "Geben Sie die Straße und PLZ ein: " << endl;
		//s >> str >> plz;
		s >> *(dynamic_cast<Adresse*>(&z));
	}
	else
	{
		s >> z.Name >> z.Alter >> *(dynamic_cast<Stadt*>(&z)) >> *(dynamic_cast<Adresse*>(&z));
	}
	//z = Person(pname, alter, name, ez, str, plz);
	return s;
}

Person2::Person2(string name, int alter,
	string stname, int ez,
	string StrasseNr, const string PLZStadt)
	: Stadt(stname, ez), adresse(StrasseNr, PLZStadt)
{
	setName(name);
	setAlter(alter);
}

Person2::Person2(string name, int alter,
	string stname, int ez,
	Adresse adr)
	: Stadt(stname, ez), adresse(adr)
{
	setName(name);
	setAlter(alter);
}

Person2::Person2(const Person2& st)
{
	if (this != &st)
	{
		*this = st;
	}
	else {
		throw string("Kopie nicht zulässig!");
	}
}

ostream& operator << (ostream& s, const Person2& z)
{
	if (typeid(s) == typeid(cout))
	{
		s << "Person2 = {" << z.getName() << ", " << z.getAlter() << "}" << endl;
		s << static_cast<Stadt>(z);
		s << z.adresse;
	}
	else
	{
		s << z.getName() << " " << z.getAlter() << " ";
		s << static_cast<Stadt>(z);
		s << z.adresse;
	}
	return s;
}

istream& operator >> (istream& s, Person2& z)
{
	//string pname, name, str, plz;
	//int alter, ez;
	if (typeid(s) == typeid(cin))
	{
		cout << "Geben Sie Namen und Alter der Person2 ein:" << endl;
		s >> z.Name >> z.Alter;
		cout << "Geben Sie Namen und Einwohnerzahl der Stadt ein: " << endl;
		//s >> name >> ez;
		s >> *(dynamic_cast<Stadt*>(&z));
		cout << "Geben Sie die Straße und PLZ ein: " << endl;
		s >> z.adresse;
	}
	else
	{
		s >> z.Name >> z.Alter >> *(dynamic_cast<Stadt*>(&z)) >> z.adresse;
	}
	//z = Person2(pname, alter, name, ez, str, plz);
	return s;
}