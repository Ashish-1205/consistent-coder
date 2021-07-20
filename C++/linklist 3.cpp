#include<iostream>
#include <stdlib.h>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};

void push(Node** head, int DATA)  
{  
    Node* one = new Node(); 
    one->data = DATA;  
    one->next = (*head);  
    (*head) = one;  
}

void insert(Node* pnode, int data)  
{  
    if (pnode == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
    Node* nnode = new Node(); 
    nnode->data = data;  
    nnode->next = pnode->next;  
    pnode->next = nnode;  
}  
  
void print(Node* n)
{
	while(n!= NULL)
	{
	cout<< n->data <<" ";
	n= n->next;
   }
}
void deleteNode(struct Node **head_ref, int key) 
{ 
    struct Node* temp = *head_ref, *prev;  
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;  
        free(temp);             
        return; 
    }  
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    }  
    if (temp == NULL) return;  
    prev->next = temp->next; 
  
    free(temp);   
} 
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	head = new Node();
	second = new Node();
	third = new Node();
	head-> data = 10;
	head ->next = second;
	second -> data = 11;
	second -> next = third;
	third -> data = 12;
	third-> next = NULL;
	push(&head, 1);
    insert(head->next, 9);  
    deleteNode(&head, 11);
	print(head);
	return 0;
}
