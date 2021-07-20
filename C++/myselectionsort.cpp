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

/*int mini(int a, int b)
{
	if(a<b)
		return a;
	return b;
}*/

void swap(int *x, int *y)
{
	int temp = *x;
	*x=*y;
	*y=temp;
	return;
}

void selection(int a[])
{
	int i,loc,j;
	for(i=0;i<4;i++)
	{
		loc=i;
		for(j=i+1;j<5;j++)
		{
			//min = mini(min, a[j]);
			if(a[loc]>a[j])
				loc=j;
		}
		swap(&a[i],&a[loc]);
		cout<<endl;
		print(a);
	}
}

int main()
{
	cout<<"Define an array of size 5 :- ";
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nArray after sorted by selection sort :- ";
	selection(a);
	print(a);
	return 0;
}
