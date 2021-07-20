#include<iostream>
using namespace std;

int feb(int n)
{
	if(n<=1)
	return n;
	return feb(n-2) + feb(n-1);
}

int main()
{
	int i,n;
	cout<<"Enter no. till you want febonacci series :- ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
	cout<<feb(i)<<" ";
    }
	return 1;
}
