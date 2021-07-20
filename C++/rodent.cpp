#include<iostream>
using namespace std;
class rodent
{
	public :
		char tail[10];
		char size[10];
		put(char a[10], char b[10])
		{
			tail = a;
			size = b;
    	}
};
class rat : public rodent
{
	public :
		int mass;//230
};
class hamster : public rodent  
{
	public :
		int lifespan;//3
};
class gerbil : public rodent
{
	public : 
	int species;//110
};
int main()
{
	rat r1;
	gerbil g1;
	hamster h1;
    return 0;
}
