#include "intstack.h"
#include <iostream>
using namespace std;

intStack::intStack(int num) {     
	stackArray = new int[num];  //creates a dynamic variable that is an array and then also initializing the size
	stackSize = num;    //stores the size on a variable for future use (to check if stack is full)            
	top = -1; // initializes top to -1 so that when new stack is added, the array will start from index 0
}

void intStack::push(int num) {
	if (isFull()) cout<<"Stack already full."; //checks if isFull function is true
	
	else {   
		top++; //top moves to another index which was initialized from -1 and will become to 0 (assuming its the first time pushing a value)
		stackArray[top] = num; //assuming its the first value pushed, from -1 it will become to 0 so the num will be assigned to first index of array
		                           // stackArray[top] = num is the same as stackArray[0] = num (if it is the first time pushing a value)
	}
}

void intStack::pop (int &num) {
	if (isEmpty()) cout<<"\nStack is empty."; //checks if isEmpty function is true
	
	else {
		num = stackArray[top];    //saves the last value inputted also known as top and then will be passed to catchVar in main function
		top--; //removes the latest stack and then goes to the one before it
	}
	
}

bool intStack::isFull() {
	bool status; //value holder for boolean which will be used for other functions
	
	if (top == stackSize - 1 ) { //checks if its full already, stacksize - 1 is used since top will be starting from 0 index
		status = true;// so if size is 5, the last index will be 4 (0, 1, 2, 3, 4)
	}
	else status = false;
	return status;
}

bool intStack::isEmpty() {
	bool status; // value holder to be used for other functions
	
	if (top == -1) status = true;  //checks if top is still equal to -1 which means there are no stacks
	else status = false;
	return status;
}
