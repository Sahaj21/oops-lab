//multiple inheritance i.e a class inherits from more than one class  
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
class C
{
public:
	int c;
    void getdata()
    {
    	cout<<"enter the value of c";
    	cin>>c;

    }
	C()
	{
		c=0;
	}

	
};
class B:public A,public C
{
public:
	
void display()
{
	cout<<"THE VALUES OF A ,B AND C ARE: \n a="<<a<<"\n b="<<b<<"\n c="<<c;
}
};



int main()
{
    
    B objB;
    objB.getdata();
    objB.display();

	return 0;
}
//this code was written to study the errors that arise when 2 classes 
//with same function names are called and then there is discrepancy during the runtime
//here the getdata function call is ambigious