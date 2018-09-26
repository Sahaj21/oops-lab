#include<iostream>

using namespace std;





class complex{
	int x,y;

public:
	void get(int a,int b)
	{
	x=a;
	y=b;
	}
	
	complex(int r,int i)
	{
	x=r;
	y=i;	
	}
	
	complex operator +(complex c)
	{
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	
	return temp; 
	}
	complex(){}
	
	void display()
	{
		cout<<x<<"+i"<<y<<"\n";
	}
};

int main()
{
	
	complex c1(1,2),c2,c3;
	c2.get(3,4);
	c3=c1+c2;
	
	c1.display();
	c2.display();
	c3.display();
	
	
	return 0; 
	
}
