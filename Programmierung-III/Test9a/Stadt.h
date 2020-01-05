/*
Test:				9
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Stadt
{
private:
	string Name;
	int Einwohner;

public:
	Stadt(string name = string("BRB"), int ez = 100000);
	Stadt(const Stadt& st);
	~Stadt() {};
	string getName() const { return Name; }
	void setName(string name);
	int getEinwohner() const { return Einwohner; }
	void setEinwohner(int ez);
	friend ostream& operator << (ostream& s, const Stadt& z);
	friend istream& operator >> (istream& s, Stadt& z);
};