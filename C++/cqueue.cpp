#include<bits/stdc++.h>
using namespace std;
class cQueue
{
	int front,rear,a[5];
	public:
		cQueue()
		{
			front=-1;
			rear=-1;
		}
		void insertion(int item)
		{
			
			if((front==rear+1) || (front==0 && rear==4))
			{
				cout<<"\n Overflow";
				return;
			}
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
				rear=0;
				a[rear]=item;
				cout<<"\n "<<item<<" is inserted in the queue.";
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
			if(front==4)
			{
				front=0;
				cout<<"\n "<<item<<" is deleted.";
				return item;
			}
			front++;
			cout<<"\n "<<item<<" is deleted.";
			return item;
		}
		void display()
		{
			cout<<"\n Queue is :- ";
			int j=front;
			while(1)
			{
				if(j==rear)
				{
					cout<<a[j]<<" ";
					break;
				}
				cout<<a[j]<<" ";
				if(j==4)
					j=0;
				else
					j++;
			}
			return;
		}
};

int main()
{
	cQueue q;
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
