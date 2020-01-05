/*
Test:				9
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/
#include <fstream>
#include "person.h"

int main(int argc, char* arv[])
{
	// Test 9c
	{
		Person2 a1, a2("Peter", 30, "Brandenburg", 78000, "Magdeburgerstrasse50", "14770");
		Person2 a4("Meier", 30, "Brandenburg", 78000, Adresse("Magdeburgerstrasse50", "14770"));
		Person2 a3(a2);
		Person2* pa = new Person2("Franz", 23, "Berlin", 4000000);
		cout << "a1: " << a1 << endl;
		cout << "a2: " << a2 << endl;
		cout << "a3: " << a3 << endl;
		cout << "a4: " << a4 << endl;
		cout << "pa: " << *pa << endl;
		cout << endl;
		//cout << "Geben Sie nacheinander Namen und Alter der Person2," << endl;
		//cout << "Namen und Einwohnerzahle der Stadt, die Straße und PLZ ein: " << endl;
		try {
			cin >> *pa;
		}
		catch (string e) {
			cout << e << endl;
		}
		cout << "pa: " << *pa << endl;

		ofstream f1("test.txt", ios::out);
		if (f1.is_open())
		{
			f1 << a1;
			f1.close();
		}

		ifstream f2("test.txt", ios::in);
		if (f2.is_open())
		{
			f2 >> a2;
			f2.close();
		}
		cout << "a1: " << a1 << endl;
		cout << "a2: " << a2 << endl;

		if (pa) delete pa;
	}

	/*
	// Test 9a
	{
		Person1 a1, a2("Meier", 30, "Rathenow", 45000, "PlauerStr.20", "14555Rathen");
		Person1 a3(a2);
		Person1 * pa = new Person1("Hund", 11, "Berlin", 4000000);
		cout << "a1: " << a1 << endl;
		cout << "a2: " << a2 << endl;
		cout << "a3: " << a3 << endl;
		cout << "pa: " << *pa << endl;
		cout << endl;
		cout << "Geben Sie nacheinander Namen und Alter der Person," << endl;
		cout << "Namen und Einwohnerzahle der Stadt, die Straße und PLZ ein: " << endl;
		try {
			cin >> *pa;
		}
		catch (string e) {
			cout << e << endl;
		}
		cout << "pa: " << *pa << endl;

		ofstream f1("test.txt", ios::out);
		if (f1.is_open())
		{
			f1 << a1;
			f1.close();
		}

		ifstream f2("test.txt", ios::in);
		if (f2.is_open())
		{
			f2 >> a2;
			f2.close();
		}
		cout << "a1: " << a1 << endl;
		cout << "a2: " << a2 << endl;

		if (pa) delete pa;
	}
	*/
	system("pause");
	return 0;
}