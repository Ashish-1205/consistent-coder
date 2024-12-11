#include<iostream>
using namespace std;
int main()
{
	int a[40],i,n,p,j,z;
	cout<<"Enter size of array :- ";
	cin>>n;
	cout<<"\nEnter the values of array :- ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];    
	}
	cout<<"Enter the position to be added :-";
	cin>>p;
	cout<<"Enter the element to be added :-";
	cin>>j;
	for(i=n-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=j;
	cout<<"\nThe new array formed is :-";
	for (i=0;i<=n;i++)
	{
		cout<<a[i]<<", ";
	}
	cout<<"\nEnter the location to be deleted :- ";
	cin>>z;
	if(z>=n+1)
	cout<<"Delete is not possible";
	else
	{
		for(int c=z-1;z<n-1;z++)
		{
			a[c]=a[c+1];
		}
	cout<<"\nThe new array formed is :-";
	for (i=0;i<=n;i++)
	{
		cout<<a[i]<<", ";
	}
}return 0;
}
