#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	public :
	int data;
	node* next;
};

void push(node** head, int Data)

{
	node* zero;
	zero = new node;
	zero->data = Data;
	zero->next = (*head);
	*head = zero;
}

void print (node* n)
{
	while (n!=NULL)
	{
		
		cout<<n->data<<" ";
		n= n->next;
	}
}	
/*void delete_position(int pos)
  {
  	node** head;
    node *current=new node;
    node *previous=new node;
    current= *head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;
  }
*/
int main()
{
	int i,p;
	node* one = NULL;
	node* two = NULL;
	node* three = NULL;
	
	one = new node;
	two = new node;
	three = new node;
	cout<<"Enter three datas :- ";
	cin>>one->data;
	one->next = two;
	cin>>two->data;
	two->next = three;
	cin>>three->data;
	three-> next = NULL;
	cout<<"Enter the value to be added in the front :-";
	cin>>i;
	push(&one, i);
	cout<<"The new list is :- ";
	print(one);
	cout<<"Enter the positon to be deleted";
	cin>>p;
	print(one);
	getch();
    return 0;
}
