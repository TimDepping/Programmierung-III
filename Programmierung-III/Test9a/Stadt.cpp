/* Stadt.cpp
Test 8: Klassen
Loose, 20.12.2017
*/

#include "Stadt.h"

Stadt::Stadt(string name, int ez)
{
	setName(name);
	setEinwohner(ez);
}

Stadt::Stadt(const Stadt& st)
{
	if (this != &st) *this = st;
}

void Stadt::setName(string name)
{
	const char* c = name.c_str();
	if (*c >= 'A' && *c <= 'Z')
		Name = name;
	else
		throw string("Name ist unzulaessig!");
}

void Stadt::setEinwohner(int ez)
{
	if (ez >= 10000 && ez <= 10000000)
		Einwohner = ez;
	else
		throw string("Einwohnerzahl ist unzulaessig!");
}

ostream& operator << (ostream& s, const Stadt& z)
{
	return s << "Stadt = {" << z.getName() << ", " << z.getEinwohner() << "}" << endl;
}

istream& operator >> (istream& s, Stadt& z)
{
	string name;
	int ez;
	s >> name >> ez;
	z = Stadt(name, ez);
	return s;
}
