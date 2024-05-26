using namespace std;
#include <iostream>
#include "intstack.h"

int main() {
	intStack stack(5);
	int catchVar;
	
	cout<<"Pushing 10...\n";
	stack.push(10);
	cout<<"Pushing 20...\n";
	stack.push(20);
	cout<<"Pushing 30...\n";
	stack.push(30);
	cout<<"Pushing 40...\n";
	stack.push(40);
	cout<<"Pushing 50...\n";
	stack.push(50);
	
	
	cout<<"\n\nPopping ";
	stack.pop(catchVar);
	cout<<catchVar<<"...";
	cout<<"\n\nPopping ";
	stack.pop(catchVar);
	cout<<catchVar<<"...";
	cout<<"\n\nPopping ";
	stack.pop(catchVar);
	cout<<catchVar<<"...";
	cout<<"\n\nPopping ";
	stack.pop(catchVar);
	cout<<catchVar<<"...";
	cout<<"\n\nPopping ";
	stack.pop(catchVar);
	cout<<catchVar<<"...";
	cout<<"\n\nPopping ";
	stack.pop(catchVar);
	
	
	
	
	return 0;
}
