#include<iostream>
using namespace std;
class stud
{
	public:
		char name[20];
		int age;
};
class details : public stud
{
	public:
	int standard;
	int roll;
};
class acc : public details
{
	public:
		int fee;
};
int main()
{
	acc s1;
	cout<<"Name :-";
	cin>>s1.name;
	cout<<"Class :-";
	cin>>s1.standard;
	return 0;
}
