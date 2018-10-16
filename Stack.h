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
		Linkedlist::Linkedlist(); //create and empty linklist using constructor of base class (LinkedList)
	}

	//Copy Constructor
	Stack(const Stack<T>& aStack)
	{
		Linkedlist::Linkedlist(aStack);
	}

	//operations: push, pop, is-empty, print-stack, print-first and last, get-length, get-size(total item count)

	//push
	//returns true if successful
	bool push(const T& newElement)
	{
		return Linkedlist::AddFirst(newElement);
	}

	//Pop
	bool pop()
	{
		return Linkedlist::removeFirst();
	}

	//is empty
	bool isEmpty()
	{
		return Linkedlist::isEmpty();
	}

	//Prints stack from top to bottom
	void printStacks()
	{
		for (int i = 1; i < getCount() + 1; i++)
		{
			cout << getEntry(i) << endl;
		}
	}

	//get first node item
	T getFirst()
	{
		return Linkedlist::getEntry(1);
	}

	//get last node item
	T getLast()
	{
		return Linkedlist::getEntry(HeadNode.getItemCount());
	}

	//print first element of stack
	void printFirst()
	{
		cout << getFirst() << endl;
	}

	//print last element of stack
	void 	void printLast()
	{
		cout << getLast() << endl;
	}

	//get total item counts 
	int getSize()
	{
		return Linkedlist::getLength();
	}
};
#endif
