#include <bits/stdc++.h>
using namespace std;
class Stack
{
	int top;
	public:
		int a[10];
		Stack()
		{
			top=-1;
		}
		int pop()
		{
			if(top<0)
				cout<<"Stack is Empty\n";
			else
			{
				int x=a[top--];
				cout<<x<<" is popped out\n";
				return x;
			}
		}
		void push(int p)
		{
			if(top>=9)
			{
				cout<<"Overflow\n";
			}
			else
			{
				a[++top]=p;
				cout<<p<<" is pushed.\n";
			}
			
		}
		void display()
		{
			int i;
			if(top==-1)
			{
				cout<<"Stack is Empty";
				//return;
			}
			else
			{
				cout<<"Stack is :- ";
				for(i=0;i<=top;i++)
				{
					cout<<a[i]<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	Stack s;
	int j;
	cout<<"What you want to do : \n push(0) ,pop(1) or display(2).\n press any other key to end. :- ";
	while(1)
	{
		cin>>j;
		if(j==0)
		{
			cout<< "Value :- ";
			int value;
			cin>>value;
			s.push(value);
		}
		else if(j==1)
		{
			s.pop();
		}
		else if(j==2)
			s.display();
		else
			break;
	}
	return 1;
}
