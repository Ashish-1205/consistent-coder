//Program for swapping two numbers
#include<iostream>
using namespace std;
int main()
{
	// a) By three variables
	int a,b,c;
	cout<<"Enter the values of a and b :- ";
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<"The value of a after swapping :- "<<a<<"\n";
	cout<<"The value of b after swapping :- "<<b;
	// b) By two variables
    int d,e;
    cout<<"\nEnter the values of d and e :- ";
    cin>>d>>e;
    d=d+e;
    e=d-e;
    d=d-e;
    cout<<"The value of d after swapping :- "<<d<<"\n";
	cout<<"The value of e after swapping :- "<<e;
	return 0;
}
