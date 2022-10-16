#include <iostream>
#include "stack.h"
using namespace std;

int main()
{

	Stack s1, s2;

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	cout << "Stack s1:" << endl;
	cout << s1.pop();
	cout << endl;
	cout << s1.pop();
	cout << endl;
	cout << s1.pop();
	cout << endl;
	
	s2.push(5);
	s2.push(6);
	s2.push(7);
	s2.push(8);
	cout << "Stack s2:" << endl;
	cout << s2.pop();
	cout << endl;
	cout << s2.pop();
	cout << endl;
	cout << s2.pop();
	cout << endl;
	

	return 0;
}
