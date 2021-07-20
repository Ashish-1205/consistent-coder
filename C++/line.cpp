#include<iostream>
#include<WinBGlm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,y1,y2,m,x,y;
	cin>>x1>>y1>>x2>>y2;
	for(x=x1;x<=x2;x++)
	{
		m=(y2-y1)/(x2-x1);
		y=m*x+3;
		putpixel(x,y);
	}
}
