#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,s=0,p=0,m,i,j,k;
	cout<<"Enter the no. of digits :- ";
	cin>>j;                            //j=4
	j--;                               //j=3
	cout<<"Now enter the no. to be reversed :- ";
	cin>>k;                            //k=2647
	while (j>=0)
	{
	i=pow (10,j);                      //i= 1000    //i=100		//i=10		//i=1
	m=k/i;                             //m=2        //m=6		//m=4		//m=7
	k=k%i;              			   //k=647      //k=47		//k=7		//k=0
	t=m*pow(10,p);                     //t=2        //t=60		//t=400		//t=7000
	s= s+t;    				           //s=2        //s=62		//s=462		//s=7462
	p++;                               //p=1        //p=2		//p=3		//p=4
	j--;                               //j=2   	    //j=1		//j=0		//j=-1
	}	                                                                                        //  2647/1000= 2*1000 + 647
	cout<<"\nThe reversed number is :-"<<s;
	return 0;
}
