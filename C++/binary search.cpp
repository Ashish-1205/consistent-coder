#include <iostream> 
using namespace std;  
int bs( int a[],int s, int l, int x) 
{ 
	while(l>= s)
	{ 
		int mid = (l + s)/ 2; 
		if (a[mid] == x) 
			return mid; 

		else if (a[mid] > x) 
		l=mid-1;
		else
		 s= mid +1;
	}  
	return -1; 
} 

int main() 
{ 
	int i,x,a[5];
	cout<<"Enter 5 elements in array :- " ;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched :- ";
    cin>>x;
	int result = bs(a, 0, 4, x); 
	if(result == -1) 
	cout << "Element is not present in array";
    else
	cout << "Element is present at index " << result; 
	return 0; 
} 

