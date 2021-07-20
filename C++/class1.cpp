#include<iostream>
using namespace std;
class stud
{
	private:
	char name[20];
	int roll;
	int age;
	public:
		void putdata(void);
		void getdata(void);
}std1;
void stud::putdata(void)
{
cout<<"\nName:-"<<name;
cout<<"\nRoll No.:-"<<roll;
cout<<"\nAge:-"<<age;
}
void stud::getdata(void)
{
	cout<<"\nName :-";
	cin>>name;
	cout<<"\nRoll No. :-";
	cin>>roll;
	cout<<"\nAge :-";
	cin>>age;
}
int main()
{
   cout<<"Enter the details of Student ";
  {
    std1.getdata();
   std1.putdata();
   }
   return 0;
}

