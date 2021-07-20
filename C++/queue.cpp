#include<bits/stdc++.h>
using namespace std;
class Queue
{
	int front,rear,a[5];
	public:
		Queue()
		{
			front=-1;
			rear=-1;
		}
		void insertion(int item)
		{
			if(front==-1)
			{
				front=0;
				rear=0;
				a[front]=item;
				cout<<"\n "<<item<<" is inserted in the queue.";
				return;
			}
			if(rear==4)
			{
				cout<<"\n Overflow";
				return;
			}
			
			cout<<"\n "<<item<<" is inserted in the queue.";
			a[++rear]=item;
			return;
		}
		int deletion()
		{
			int item=a[front];
			if(front==-1)
			{
				cout<<"\n Underflow.";
				return -1;
			}
			if(front==rear)
			{
				
				cout<<"\n "<<item<<" is deleted.";
				front=-1;
				rear=-1;
				return item;
			}
			cout<<"\n "<<item<<" is deleted.";
			item=a[front++];
			return item;
		}
		void display()
		{
			cout<<"\n Queue is :- ";
			for(int i=front;i<=rear;i++)
				cout<<a[i]<<" ";
			return;
		}
};

int main()
{
	Queue q;
	int j;
	cout<<"What you want to do : \n insert(0) ,delete(1) or display(2).\n press any other key to end. :- ";
	while(1)
	{
		cin>>j;
		if(j==0)
		{
			cout<< "Value :- ";
			int value;
			cin>>value;
			q.insertion(value);
		}
		else if(j==1)
		{
			q.deletion();
		}
		else if(j==2)
			q.display();
		else
			break;
	}
	return 1;
}
