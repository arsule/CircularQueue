#include"CQueue.h"
int main()
{
	Queue q;

 	q.EnQueue(10);
 	q.EnQueue(20);
 	q.EnQueue(30);
 	cout<<"\n Display Called.\n";
 	q.Display();
 	q.EnQueue(40);
 	q.EnQueue(50);
 	cout<<"\n Display Called.\n";
 	q.Display();
 //	cout<<"\n"<<q.DeQueue();
 //	cout<<"\n"<<q.DeQueue();
 	
 	q.EnQueue(60);
 	cout<<"\n Display Called.\n";
 	q.Display();
 	
 	
 	return 0;
}
