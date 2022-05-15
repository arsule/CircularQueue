#include"CQueue.h"
//////////////////////////////////////
Queue::	Queue()
{
	front = -1;
	rare = -1;
}
//////////////////////////////////////
bool Queue:: isEmpty()
{
	if(front == -1 && rare == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//////////////////////////////////////
bool Queue:: isFull()
{
	if(front == 0 && rare == size-1 || rare == front - 1)
	{
		return true;
	}
	else{
		return false;
	}
}

//////////////////////////////////////
void Queue:: EnQueue(int i)
{
	if(!isFull())
	{
		if(isEmpty())
		{
			front = 0;
			rare = 0;
		}
		else if (rare == size - 1)
		{
			rare = 0;
		}
		else if (front == size - 1)
		{
			front = 0;
		}
		else
		{
			
			rare++;
		}
		arr[rare] = i;
	}
	else
	{
		cout<<"\nQueue is full. Insertion not possible.\n";	
	}	
}	
//////////////////////////////////////
int Queue:: DeQueue()
{
	int x = 0;
	if(!isEmpty())
	{
		x = arr[front];
		//There is only 1 element in queue
		if(front == rare)
		{
			front = -1;
			rare = -1;
		}
		
		else
		{
			front++;
		}
	}
	else
	{
		cout<<"\nQueue is empty. Deletion not possible.\n";	
	}
	return x;
}
//////////////////////////////////////
void Queue::Display()
{
	if(!isEmpty())
	{
		int i=front;
		while(i!=rare)
		{
			cout<<arr[i]<<"\n";
			if(i==size-1)
			{
				i=0;
			}
			else
			{
				i++;
			}
		}
		cout<<arr[i]<<"\n";
		
	}
	else
	{
			cout<<"\nQueue is empty. Display not possible.\n";
		
	}
}
//////////////////////////////////////
