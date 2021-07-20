#include <iostream>
using namespace std;

int max(int a[])
{ 
 int i,m;
 m=a[0];
 for(i=0;i<11;i++)
 {
 	if(a[i]>m)
 	 {
  		m=a[i];
	 }
 }
 return m;
}

int main()
{
	int t=0,i,q[11],s,n,p[11],c;
	for(i=0;i<11;i++)
	{
	    q[i]=0;
	    p[i]=0;
	}
	cout<<"The no. of submissions are:-";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"Enter the q no. :-";
	cin>>c;
	switch(c)
	 {
		case 1:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 2:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 3:  
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 4:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 5:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 6:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 7:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 8:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 9:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    case 10:
			cout<<"Enter the marks in that :-";
	        cin>>s;
	        p[i]=s;
	        break;
	    default:
	    	cout<<"You entered invalid question";
	    	break;
	 }
	}
	for(i=0;i<11;i++)
	{
	    t=t+q[i];
	}
	cout<<"Total no. of marks scored are:- "<<t;
	return 0;
}

