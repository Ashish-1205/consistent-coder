#include<iostream>
using namespace std;
class node
{  public:
	int data;
	node * next;	
};
void show(node* srt)
{ 
  while(srt!=NULL)
  { cout<<(srt->data)<<"  ";
    srt=srt->next;
  }
}
void insert(node* srt)
{  node *temp;
   temp = new node;
   int i;
   cout<<"enter position of node to enter";
   cin>>i;
   {
        for(int k=0;k<(i-1);i++)
         srt=srt->next;
        cout<<"enter elemnt for node";
        cin>>(temp->data);
        srt->next=temp;
        temp->next=NULL;
    }
}
int main()
{  
   node* head= NULL;
   node* end= NULL;
   head = new node;
   end = new node;
   cout<<"enter element for start node";
   cin>>(head->data);
   cout<<"enter element for last node";
   cin>>(end->data);
   head->next=end;
   end->next=NULL;
   insert(head);
   show(head);
   getchar();
   return 0;   
}
