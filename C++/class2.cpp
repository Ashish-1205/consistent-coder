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
}std1, std2;
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
	int i=1;
   cout<<"Enter the details of Student ";
   while(i|=0)
  {
    std1.getdata();
   std1.putdata();
   cout<<"\nEnter 0 for the termination and any other integer for continution";
   cin>>i;
   }
   return 0;
}

