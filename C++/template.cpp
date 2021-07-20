//Program for calculating squares of diffrent data types using templates
#include<iostream>
using namespace std;
template <typename T>
T sqr(T a)
{
	return a*a;
}
int main()
{
	cout<<sqr <int>(3)<<"\n";
	cout<<sqr <float>(3.1)<<"\n";
	return 0;
}
