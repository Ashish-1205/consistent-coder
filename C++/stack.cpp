#include <bits/stdc++.h> 
using namespace std; 
class Stack { 
	int top; 

public: 
	int a[1000]; 
	Stack() { top = -1; } 
	bool push(int x); 
	int pop(); 
	void display(); 
}; 

bool Stack::push(int x) 
{ 
	if (top >= (999)) { 
		cout << "Stack Overflow"; 
		return false; 
	} 
	else { 
		a[++top] = x; 
		cout << x << " pushed into stack\n"; 
		return true; 
	} 
} 

int Stack::pop() 
{ 
	if (top < 0) { 
		cout << "Stack Underflow"; 
		return 0; 
	} 
	else { 
		int x = a[top--]; 
		return x; 
	} 
} 
 void Stack::display()
 {
 	int i;
 	if (top==-1)
 	{
 		cout<<"Stack is empty";
	}
	else
	{
		cout<<"Stack is :- ";
	}
	for (i=top;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
 }

// Driver program to test above functions 
int main() 
{ 
	class Stack s; 
	s.push(10); 
	s.push(20); 
	s.push(30); 
	cout << s.pop() << " Popped from stack\n"; 
    s.display();
	return 0; 
} 

