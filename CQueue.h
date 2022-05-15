#include<iostream>
using namespace std;
#define size 5
class Queue{
	int front, rare;
	int arr[size];
	public :
		Queue();
		bool isEmpty();
		bool isFull();
		void EnQueue(int );
		int DeQueue();
		void Display();
};
