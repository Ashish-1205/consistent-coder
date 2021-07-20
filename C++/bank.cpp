//Program for designing a class representing a bank
#include<iostream>
using namespace std;
class bank
{
	int bal = 0;
	int m;
	int n;
	public:
		char name [20];
		char type [10];
		int num;
		void deposit(void);
		void withdraw(void);
		void balance(void);
}acc1;
void bank::deposit(void)
{
	cin>>m;
	bal = bal + m;
}
void bank::withdraw(void)
{
	cin>>n;
	bal = bal - n;
}
void bank::balance(void)
{
	cout<<"\nAccount No. :- "<<num;
	cout<<"\nAccount Holder :-"<<name;
	cout<<"\nAccount type :- "<<type;
	cout<<"\nBalance :- "<<bal<<"\n";
}
int main()
{
	cout<<"Enter the name of depositor :-";
	cin>>acc1.name;
	cout<<"Enter the account number :-";
	cin>>acc1.num;
	cout<<"Enter the type of account :- ";
	cin>>acc1.type;
	cout<<"Enter the amount to be deposited :-";
	acc1.deposit();
	acc1.balance();
	cout<<"Enter the amount to withdraw :-";
	acc1.withdraw();
	acc1.balance();
	return 0;
}
