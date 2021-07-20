#include<iostream>
using namespace std;
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
int main()
{
	int a[40],i,n,v;
	cout<<"Enter size of array :- ";
	cin>>n;
	cout<<"\nEnter the values of array :- ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];                    
	}
	cout<<"Enter the values to be searched ";
	cin>>v;
	int result = search(a, n, v); 
   (result == -1)? cout<<"Element is not present in array" 
                 : cout<<"Element is present at index " <<result; 
   return 0; 
}
