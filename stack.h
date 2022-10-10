class Stack {
  public:
	void push(int element);
	int pop();
	bool is_empty();
	Stack();
	~Stack();

  private:
	int top;
	int* items;
};
