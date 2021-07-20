#include<iostream>
using namespace std;
class B;
class A
{
	int a = 5;
	public:
		friend void com(A f,B s);
};
class B
{
	int b = 3;
	public:
		friend void com(A f,B s);
};
void com(A f, B s)
{
	if(f.a>s.b)
	cout<<f.a<<" is greater then "<<s.b;
	else if(f.a<s.b)
	cout<<f.a<<" is smaller then "<<s.b;
	else
	cout<<f.a<<" is equal to "<<s.b;
}
int main()
{
	A o;
	B t;
	com(o,t);
	return 0;
}

