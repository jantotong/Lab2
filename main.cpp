#include <iostream>
#include <string>
#include "Node.h"
#include "HeadNode.h"
#include "Stack.h"
#include "LinkedList.h"
#include "Currency.h"

using namespace std;

//Group Members: Haddar Goldstein and Jan To Tong

void getEntry();

int main()
{
	//First, Linkedlist
	//create linked list
	Linkedlist<string> *listptr;

	//Added chain 1 and 2 to list
	listptr = new Linkedlist<string>();
	listptr->Add(1, "Chain 1"); //starts at 1, refer to setItemCount in linkedlist
	listptr->Add(2, "Chain 2");
	//display
	cout << "First layer of Linkedlist" << endl;
	cout <<  "Result: "  << listptr->getEntry(1) << endl;
	//second layer
	cout << "Second layer of Linkedlist" << endl;
	cout << "Result: " << listptr->getEntry(2) << endl;
	//end of linkedlist

	//beggining of stack
	Stack<string> *stackStringptr;
	Stack<int> *stackIntptr;
	Stack<Dollar*> *stackCurrency;

	/*

	stackIntptr = new Stack<int>();
	stackStringptr = new Stack<string>();
	stackCurrency = new Stack<Dollar*>();


	cout << "Will now push A,B,C,D " << endl;
	stackStringptr->push("a");
	stackStringptr->push("b");
	stackStringptr->push("c");
	stackStringptr->push("d");

	stackIntptr->push(1);
	stackIntptr->push(2);
	stackIntptr->push(3);
	stackIntptr->push(4);

	stackCurrency->push(new Dollar(0, 0));//start with 0


	//Now printing stacks

	cout << "Printing Stacks:" << endl;

	stackStringptr->printStack();
	stackIntptr->printStack();
	stackCurrency->printStack();

	cout << "Will show pop now:" << endl;
	stackStringptr->pop();
	stackStringptr->pop();
	stackIntptr->pop();
	stackIntptr->pop();
	stackIntptr->pop();
	stackCurrency->pop();

	cout << "Printing Stacks:" << endl;
	stackStringptr->printStack();
	stackIntptr->printStack();
	stackCurrency->printStack();

	//Crash code:
	stackStringptr.getLength();

	//remove everything
	delete stackStringptr;
	delete stackIntptr;
	delete stackCurrency;
	stackCurrency = nullptr;
	stackIntPointer = nullptr;
	stackStringptr = nullptr;
	*/
	system ("pause");
}
