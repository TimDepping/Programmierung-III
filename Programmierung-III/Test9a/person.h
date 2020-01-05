#pragma once
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
using namespace std;


class Person1 : public Stadt, Adresse
{
private:
	string Name;
	int Alter;
public:
	Person1(string name = "Name", int alter = 18,
		string stname = "Berlin", int ez = 100000,
		string StrasseNr = "Strasse1", string PLZStadt = "14129");
	Person1(const Person1& st);
	~Person1() {};
	string getName() const { return Name; }
	void setName(string name) { Name = name; }
	int getAlter() const { return Alter; }
	void setAlter(int alter) { Alter = alter; }
	friend ostream& operator << (ostream& s, const Person1& z);
	friend istream& operator >> (istream& s, Person1& z);
};

class Person2 : public Stadt
{
private:
	string Name;
	int Alter;
	Adresse adresse;
public:
	Person2(string name, int alter, string stname, int ez, Adresse adr);
	Person2(string name = "Name", int alter = 100,
		string stname = "Berlin", int ez = 100000,
		string StrasseNr = "Strasse2", string PLZStadt = "14129");
	Person2(const Person2& st);
	~Person2() {};
	string getName() const { return Name; }
	void setName(string name) { Name = name; }
	int getAlter() const { return Alter; }
	void setAlter(int alter) { Alter = alter; }
	Adresse getAdresse() const { return adresse; }
	void setAdresse(Adresse adresse) { this->adresse = adresse; }
	friend ostream& operator << (ostream& s, const Person2& z);
	friend istream& operator >> (istream& s, Person2& z);
};