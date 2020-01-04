/*
Test:				9a
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#pragma once

#include <string>
#include "Stadt.h"
#include "adresse.h"

using namespace std;

class Person : public Stadt, Adresse
{
private:
	string name;
	int alter;
public:

	/* Constructors */

	Person(string name = "name", int alter = 18)
	{
		this->name = name;
		this->alter = alter;
	}
	
	Person(const Person& person);

	~Person()
	{
		
	};

	string getName() const{ return name; }

	void setName(string name) { this->name = name; }

	int getAlter() const { return alter; }

	void setAlter(int alter) { this->alter = alter; }

	friend ostream& operator << (ostream& stream, const Person& person);
	friend istream& operator >> (istream& stream, const Person& person);
	
};