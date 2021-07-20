//Program for swapping by two variables
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the values of a and b :- ";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nValue of a is :- "<<a;
	cout<<"\nValue of b is :- "<<b;
	return 0;
	
}
