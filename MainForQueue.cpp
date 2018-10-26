#include <iostream>
#include <string>
#include "Node.h"
#include "HeadNode.h"
#include "Queue.h"
#include "LinkedList.h"
#include "Currency.h"
using namespace std;

//Group Members: Haddar Goldstein and Jan To Tong

int main()
{
	cout << "Queue:" << endl;
	Queue<string> *QueueStringptr;
	Queue<int> *QueueIntptr;
	Queue<Dollar*> *QueueDollar; //dollar address being pointed to

	QueueIntptr = new Queue<int>();
	QueueStringptr = new Queue<string>();
	QueueDollar = new Queue<Dollar*>();  //Queuedollar is a double pointer and refers to the address 
	
	//demonstrate enqueue
	cout << "Enqueue Alpha, Beta, Charlie in string pointer " << endl;
	QueueStringptr->enqueue("Alpha");
	QueueStringptr->enqueue("Beta");
	QueueStringptr->enqueue("Charlie");

	cout << "Enqueue 1,2,3 in int pointer" << endl;
	QueueIntptr->enqueue(1);
	QueueIntptr->enqueue(2);
	QueueIntptr->enqueue(3);
	
	cout << "Enqueue 5 Dollars 50 cents and 2 Dollars 40 cents in pointer" << endl;
	QueueDollar->enqueue(new Dollar(5, 50));
	QueueDollar->enqueue(new Dollar(2, 40)); 

	//Now printing Queues
	cout << endl << "Printing Queues:" << endl;
	QueueStringptr->printQueue();
	QueueIntptr->printQueue();
	QueueDollar->printQueue();

	//demonstrate dequeue
	cout << endl<< "Will dequeue each pointer once now:" << endl << endl;
	QueueStringptr->dequeue();
	QueueIntptr->dequeue();
	QueueDollar->dequeue();

	
	cout << "Printing Queues:" << endl;
	QueueStringptr->printQueue();
	QueueIntptr->printQueue();
	QueueDollar->printQueue();

	//Will now enqueue to show enqueue adds at the rear
	cout << endl << "Enqueued string 'Delta', int 4, and 6 Dollars 69 Cents" << endl;
	QueueStringptr->enqueue("Delta");
	QueueIntptr->enqueue(4);
	QueueDollar->enqueue(new Dollar(6, 69));
	cout << endl << "Printing Queues:" << endl;
	QueueStringptr->printQueue();
	QueueIntptr->printQueue();
	QueueDollar->printQueue();

	//front and rear
	cout << endl << "Will now display front and rear:" << endl<<endl<< "Front: " <<endl;
	cout<< QueueStringptr->front() << endl;
	cout << QueueIntptr->front() << endl; 
	cout << QueueDollar->front() << endl << endl << "Rear: " << endl;
	cout << QueueStringptr->rear() << endl;
	cout << QueueIntptr->rear() << endl;
	cout << QueueDollar->rear() << endl;
	
	//empty
	cout << endl << "Will now display Empty:" << endl;
	QueueStringptr->empty();
	QueueIntptr->empty();
	QueueDollar->empty();
	QueueStringptr->printQueue();//shouldnt show anything
	QueueIntptr->printQueue();
	QueueDollar->printQueue();

	//Crash code: (Code that will crash)
	//QueueStringptr.getLength(); //Can't use linked list function with Queue object

	//remove everything because c++
	delete QueueStringptr;
	delete QueueIntptr;
	delete QueueDollar;
	QueueDollar = nullptr;
	QueueIntptr = nullptr;
	QueueStringptr = nullptr;
	system("pause");
};
