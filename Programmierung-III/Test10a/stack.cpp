/*
Test:				10a
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#include <iostream>
#include <string>
using namespace std;
#include "stack.h"

Stack::Stack(const Stack &stack)
{
	if (this != &stack)
	{
		*this = stack;
	}
}

const Stack& Stack::operator = (const Stack& stack)
{
	if(&stack != this)
	{
		max = stack.getSize();
		count = stack.getCount();
		if (data) delete[] data;
		data = new double[max];
		for(int i = 0; i < max; i++)
			data[i] = stack.data[i];
	}

	return *this;
}
double& Stack::operator [] (int index) const
{
	if(index >= 0 && index < count)
	{
		return data[index];
	} else
	{
		throw StackException("Invalid index. The index must be greater than 0 and less than the number of elements.");
	}
}

bool operator == (const Stack& stack1, const Stack& stack2)
{
	if (stack1.getCount() == stack2.getCount())
	{
		if (stack1.getSize() == stack2.getSize())
		{
			for (int i = 0; i < stack1.getCount(); i++)
			{
				if (stack1[i] != stack2[i]) return false;
			}
			return true;
		}
			
	}
	return false;
}

bool operator != (const Stack& stack1, const Stack& stack2)
{
	return !(stack1 == stack2);
}

ostream& operator << (ostream& stream, const Stack& stack)
{
	if(typeid(stream) == typeid((cout)))
	{
		stream << "Stack(" << stack.getSize() << ") ";
		for (int i = 0; i < stack.getCount(); i++)
			stream << stack.data[i] << " ";
		return stream << endl;
	} else
	{
		stream.write((char*)stack.getSize(), sizeof(int));
		stream.write((char*) stack.getCount(), sizeof(int));
		for (int i = 0; i < stack.getCount(); i++)
			stream << stack[i];
		return stream;
	}
}
