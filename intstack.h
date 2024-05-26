#ifndef INTSTACK_H
#define INTSTACK_H

class intStack
{
	int *stackArray;
	int stackSize;
	int top;
	
	public: 
	intStack(int size);
	void pop(int &num);
	void push(int num);
	bool isFull();
	bool isEmpty();
	
};

#endif
