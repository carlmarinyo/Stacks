#include "intstack.h"
#include <iostream>
using namespace std;

intStack::intStack(int num) {
	stackArray = new int[num];
	stackSize = num;
	top = -1;
}

void intStack::push(int num) {
	if (isFull()) cout<<"Stack already full.";
	
	else {
		top++;
		stackArray[top] = num;
	}
}

void intStack::pop (int &num) {
	if (isEmpty()) cout<<"\nStack is empty.";
	
	else {
		num = stackArray[top];
		top--;
	}
	
}

bool intStack::isFull() {
	bool status;
	
	if (top == stackSize - 1 ) {
		status = true;
	}
	else status = false;
	return status;
}

bool intStack::isEmpty() {
	bool status;
	
	if (top == -1) status = true;
	else status = false;
	return status;
}
