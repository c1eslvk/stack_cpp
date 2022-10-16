#include "stack.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define STACKSTEP 2

Stack::Stack()
{
	this->top = -1;
	this->size = 1;
	this->items = (int*)malloc(sizeof(int) * STACKSTEP);
	if(this->items == NULL) abort();
}

Stack::~Stack()
{
	free(this->items);
}

bool Stack::is_empty()
{
	if (this->top == -1) {
		return true;
	}
	else {
		return false;
	}
}

void Stack::push(int element)
{
	this->top++;
	if (this->top == STACKSTEP * this->size) {
		this->size++;
		this->items =
		(int*)realloc(this->items, sizeof(int) * STACKSTEP * this->size);
		if(this->items == NULL) abort();
	}
	this->items[this->top] = element;
}

int Stack::pop()
{
	int popped_element;
	if (this->is_empty()) {
		perror("Stack is empty");
		abort();
	}
	else {
		popped_element = this->items[this->top];
		this->top--;
		return popped_element;
	}
}
