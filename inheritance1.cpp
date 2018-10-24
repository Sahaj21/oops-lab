//single level inheritance i.e taking one as a parent class and another as  a child class 
//Dtyagi-9
#include <iostream>
using namespace std;
class A
{
	
public:
	int a,b;
	A(){
      a=0;
      b=0;
	};
	A(int p,int q)
	{
		a=p;
		b=q;
	}
	void getdata()
	{
		cout<<"enter the values in a and b   \n";
		cin>>a>>b;

	}
	
	
};

class B:public A
{
public:
	
void display()
{
	cout<<"THE VALUES OF A AND B ARE: \n a="<<a<<"\n b="<<b;
}
};



int main()
{
    
    B objB;
    objB.getdata();
    objB.display();

	return 0;
}