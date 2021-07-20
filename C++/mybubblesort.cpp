#include<bits/stdc++.h>
using namespace std;

void print(int a[])
{
	int i;
	for(i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return;
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x=*y;
	*y=temp;
	return;
}

void bubble(int a[])
{
	int i,n=5;
	for(i=0;i<n-1;i++)
	{
		int ptr=0;
		while(ptr<n-i-1)
		{
			if(a[ptr]>a[ptr+1])
				swap(&a[ptr],&a[ptr+1]);
			ptr++;
			cout<<endl;print(a);
		}
	}
	return;
}

int main()
{
	cout<<"Define an array of size 5 :- ";
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nArray after sorted by Bubble Sort :- ";
	bubble(a);
	print(a);
	return 0;
}
