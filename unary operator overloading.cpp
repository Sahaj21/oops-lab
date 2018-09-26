#include<iostream>

using namespace std;

class neg
{
int x,y;

public:
	void get(int a,int b)
	{
	x=a;
	y=b;
	}
	
	neg (int r=10,int i=-20)
	{
	x=r;
	y=i;	
	}


	void display()
	{
		cout<<x<<" "<<y<<"\n";
	}
		void operator -()
	{
	x=-x;
	y=-y;

     
	}
};

int main()
{
	
	neg n1,n2(-1,-5),n3;
	
	n1.get(3,4);
	
	
	n1.display();
	n2.display();
	n3.display();

	
	-n1;
	-n2;
	-n3;

	
	n1.display();
	n2.display();
	n3.display();	
	
	
	
	return 0; 
	
}
