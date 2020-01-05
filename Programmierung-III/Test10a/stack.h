/*
Test:				10a
Autoren:			Student
Matrikelnummer:		MatNr
Studiengang:		Informatik
*/

#pragma once
#include <string>
using namespace std;

class StackException
{
private:
	string message;
public:
	StackException(string message = string(""))
	{
		this->message = message;
	}
	string getMessage() const { return message; }
};


class Stack
{
private:
	double* data;
	int count;
	int max;
public:
	/* Constructors */
	Stack(int max = 10)
	{
		count = 0;
		max = max > 0 ? max : 10;
		this->max = max;
		data = new double[max];
	}

	Stack(const Stack& stack);

	~Stack()
	{
		count = 0;
		if (data) delete[] data;
	}

	int getSize() const { return max; }

	int setSize(int max)
	{
		double* data = new double[max];
		for (int i = 0; i < this->max && i < max; i++)
		{
			data[i] = this->data[i];
		}
		this->max = max;
		delete[] this->data;
		this->data = data;
	}

	int getCount() const { return count; }

	void push(double value)
	{
		if (!(count == max))
		{
			data[count++] = value;
		}
		else
		{
			throw StackException("Stack is full. Increase the size by using the setSize(int max) method or pop an element of the Stack.");
		}
	}

	double pop()
	{
		if (!(count == 0))
		{
			return data[--count];
		}
		else
		{
			throw StackException("Stack is empty. Add an element by using push(double value).");
		}

	}

	/* Operators */

	const Stack& operator = (const Stack& stack);
	double& operator [] (int index) const;
	
	friend bool operator == (const Stack& stack1, const Stack& stack2);
	friend bool operator != (const Stack& stack1, const Stack& stack2);
	
	friend ostream& operator << (ostream& stream, const Stack& stack);
	
};