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

void insertion(int a[])
{
	int i,key,j;
	for(i=1;i<5;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		cout<<endl;
		print(a);
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
	cout<<"\nArray after sorted by insertion sort :- ";
	insertion(a);
	print(a);
	return 0;
}

