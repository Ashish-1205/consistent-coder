// A complete working C++ program to 
// demonstrate all insertion methods 
#include <iostream> 
using namespace std; 

// A linked list node 
class Node 
{ 
	public: 
	int data; 
	Node* next; 
	Node* prev; 
}; 

/* Given a reference (pointer to pointer) to the head of a list 
and an int, inserts a new node on the front of the list. */
void push(Node** head_ref, int new_data) 
{ 
	/* 1. allocate node */
	Node* new_node = new Node(); 

	/* 2. put in the data */
	new_node->data = new_data; 

	/* 3. Make next of new node as head and previous as NULL */
	new_node->next = (*head_ref); 
	new_node->prev = NULL; 

	/* 4. change prev of head node to new node */
	if ((*head_ref) != NULL) 
		(*head_ref)->prev = new_node; 

	/* 5. move the head to point to the new node */
	(*head_ref) = new_node; 
} 

/* Given a node as prev_node, insert a new node after the given node */
void insertAfter(Node* prev_node, int new_data) 
{ 
	/*1. check if the given prev_node is NULL */
	if (prev_node == NULL) 
	{ 
		cout<<"the given previous node cannot be NULL"; 
		return; 
	} 

	/* 2. allocate new node */
	Node* new_node = new Node(); 

	/* 3. put in the data */
	new_node->data = new_data; 

	/* 4. Make next of new node as next of prev_node */
	new_node->next = prev_node->next; 
	prev_node->next = new_node; 
	new_node->prev = prev_node; 
	if (new_node->next != NULL) 
		new_node->next->prev = new_node; 
} 
void append(Node** head_ref, int new_data) 
{
	Node* new_node = new Node(); 
	Node* last = *head_ref;
	new_node->data = new_data; 
	new_node->next = NULL; 
	if (*head_ref == NULL) 
	{ 
		new_node->prev = NULL; 
		*head_ref = new_node; 
		return; 
	} 
	while (last->next != NULL) 
		last = last->next; 
	last->next = new_node; 
	new_node->prev = last; 

	return; 
}  
void printList(Node* node) 
{ 
	Node* last; 
	cout<<"\nTraversal in forward direction \n"; 
	while (node != NULL) 
	{ 
		cout<<" "<<node->data<<" "; 
		last = node; 
		node = node->next; 
	} 

	cout<<"\nTraversal in reverse direction \n"; 
	while (last != NULL) 
	{ 
		cout<<" "<<last->data<<" "; 
		last = last->prev; 
	} 
} 
int main() 
{ 
    Node* head = NULL;  
	append(&head, 6);  
	push(&head, 7);  
	push(&head, 1);  
	append(&head, 4);  
	insertAfter(head->next, 8); 

	cout << "Created DLL is: "; 
	printList(head); 

	return 0; 
} 
