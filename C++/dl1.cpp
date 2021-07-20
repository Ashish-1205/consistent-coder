#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		Node* prev;
}
void add(Node** head,data)
{
	Node* newn = new Node;
	newn->data = data;
	newn->next = (*head);
	newn->prev = NULL;
	if((*head)|= NULL)
	(*head)->prev = newn;
	(*head) = newn;
}

