#include<iostream>
#include<conio.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		
};

void head_insertion(Node** head, int DATA)
{
	if((*head)->data==-1)
	{
		(*head)->data=DATA;
		(*head)->next=NULL;
		return;
	}
	Node* zero = new Node;
	zero->data= DATA;
	zero->next= (*head); 	
	(*head) =zero;
	return;
}

void last_insertion(Node** head, int DATA)
{
	Node* ptr;
	Node* last= new Node;
	ptr= *head;
	while(ptr->next)
		ptr=ptr->next;
	ptr->next=last;
	last->data=DATA;
	last->next=NULL;
	return;
}

void p_insertion(Node** head, int DATA, int p)
{
	if(p==0)
	{
		head_insertion(head, DATA);
		return;
	}
	Node* ptr;
	ptr = *head;
	for(int i=1;i<p;i++)
		ptr=ptr->next;
	Node* pnode = new Node;
	pnode->data= DATA;
	pnode->next=ptr->next;
	ptr->next=pnode;
	return;
}

void insertion(Node** head, int DATA, int k)
{
	if((*head)->data==-1 || k==3)
		head_insertion(head, DATA);
	else if(k==5)
		last_insertion(head, DATA);
	else
	{
		cout<<"\n Index:- ";
		int p;
		cin>>p;
		p_insertion(head, DATA, p);
	}
	return;
}

void head_deletion(Node** head)
{
	if((*head)==NULL||(*head)->data==-1)
	{
		cout<<"\nUnderflow\n";
		return;
	}
	(*head)=(*head)->next;
	return;
}

void last_deletion(Node** head)
{
	Node* ptr;
	ptr= *head;
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=NULL;
	return;
}

void p_deletion(Node ** head, int p)
{
	if(p==0)
	{
		head_deletion(head);
		return;
	}
	Node* ptr;
	ptr=*head;
	for(int i=1;i<p;i++)
	{
		ptr=ptr->next;
	}
	ptr->next=ptr->next->next;
	return;
}

void deletion(Node** head, int k)
{
	if((*head)->next==NULL|| k==6)
		head_deletion(head);
	
	else if(k==8)
		last_deletion(head);
	else
	{
		cout<<"\n Position:- ";
		int p;
		cin>>p;
		p_deletion(head, p);
	}
	return;
}

void display(Node* n)
{
	while(n!= NULL)
	{
	cout<< n->data <<"-->";
	n= n->next;
   }
   cout<<"null";
   return;
}

void reverse(Node** head)
{
	Node* current,*prev,*next;
	current = *head;
	prev = NULL;
	next = NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	(*head)=prev;
	return;
}

int main()
{
	int j,k,v;
	Node* one = NULL;
	one = new Node;
	one->data=-1;
	cout<<"\n To build a linklist.\n Select your choice for \n 0 as insertion \n 1 as deletion \n 2 for display"<<endl;
	while(1)
	{
		cin>>j;
		if(j==0)
		{
			cout<<"\n Select the position as: \n 3 for head \n 4 for index \n 5 for last\n";
			cin>>k;
			cout<<"\n Value: ";
			cin>>v;
			insertion(&one,v,k);
		}
		else if(j==1)
		{
			cout<<"\n Select the position as: \n 6 for head \n 7 for position \n 8 for last\n";
			cin>>k;
			deletion(&one,k);
		}
		else if(j==2)
		{
			display(one);
		}
		else
			break;
	}
	cout<<"\n Reverse of the link list would be:- ";
	reverse(&one);
	display(one);
	return 1;
}
