/*
Test:				10a
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#include <iostream>
using namespace std;
#include "stack.h"

int main (int argc, char * argv[])
{
	Stack stack1;
	Stack stack2 = Stack(20);
	try
	{
		std::cout << stack1;
		for (int i = 0; i < stack1.getSize(); i++)
		{
			stack1.push(i + 0.5);
			std::cout << stack1;
		}
			
		stack1.pop();
		stack1.push(10.5);
		std::cout << stack1;
		
		stack1.pop();
		std::cout << stack1;

		std::cout << stack2;
		if (stack1 != stack2) std::cout << "stack1 and stack2 are not equal." << endl;
		stack2 = stack1;
		std::cout << stack2;
		if (stack1 == stack2) std::cout << "stack1 and stack2 are equal." << endl;
	}
	catch (StackException e)
	{
		std::cout << e.getMessage() << endl;
	}
}