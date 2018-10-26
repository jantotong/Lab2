#ifndef STACK_H
#define STACK_H
#include "Linkedlist.h"

using namespace std;
template <class T>
class Stack : protected Linkedlist <T>
{
protected:
	//inheritting from Linkedlist (wish i did this before the quiz)

public:
	//Constructors
	Stack()
	{
		Linkedlist::Linkedlist(); //create and empty linklist using constructor of base class
	}

	//Copy Constructor
	Stack(const Stack<T>& aStack)
	{
		Linkedlist::Linkedlist(aStack);
	}

	//operations: push, pop, is-empty, print-stack, print-first and last, get-length, get-size(total item count)

	//push
	//returns true if successful
	//should be void
	void push(const T& newElement)//changed to void ~hg
	{
		return Linkedlist::AddFirst(newElement);
	}

	//Pop 
	//return type should be t
	T pop()//changed to T ~hg
	{
		return Linkedlist::removeFirst();
	}

	//is empty
	bool isEmpty()
	{
		return Linkedlist::isEmpty();
	}

	//Prints stack from top to bottom
	void printStack()
	{
		for (int i = 1; i < getSize() + 1; i++)
		{
			cout << getEntry(i) << endl;
		}
	}

	//print first element of stack
	void stackTop()
	{
		cout << Linkedlist::getEntry(0) << endl;
	}

	//get total item counts 
	int getSize()
	{
		return Linkedlist::getLength();
	}
};
#endif
