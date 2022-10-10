#include "stack.h"
#include <iostream>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define STACKSTEP 2

Stack::Stack()
{
	this->top = -1;
	this->items = (int*)malloc(sizeof(int) * STACKSTEP);
}

Stack::~Stack()
{
	this->top = -1;
	free(this->items);
}

bool Stack::is_empty()
{
	if (this->top < 0) {
		return true;
	}
	else {
		return false;
	}
}

void Stack::push(int element)
{
	static int counter = 1;
	this->top++;
	if (this->top == STACKSTEP * counter) {
		counter++;
		this->items =
			(int*)realloc(this->items, sizeof(int) * STACKSTEP * counter);
	}
	this->items[this->top] = element;
}

int Stack::pop()
{
	int popped_element;
	if (this->is_empty() == true) {
		cout << "Stack is empty";
		abort();
	}
	else {
		popped_element = this->items[this->top];
		this->top--;
		return popped_element;
	}
}

int main()
{

	Stack s1;

	s1.push(1);
	s1.push(2);
	s1.push(1);
	s1.push(2);
	s1.push(1);
	s1.push(2);
	cout << s1.pop();
	cout << endl;
	cout << s1.pop();
	cout << endl;
	cout << s1.pop();
	cout << endl;

	return 0;
}
