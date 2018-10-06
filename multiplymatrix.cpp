#include<iostream>
using namespace std;


int main()
{   int n; 
	
	cin>>n;
	
	int a[n][n],b[n][n],c[n][n],sum=0;
	cout<<"\nEnter value in 1st matrix\n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			cout<<"Enter vaue for index "<<i<<" "<<j;
			cin>>a[i][j];
		}
	cout<<"\n";
 	cout<<"Enter value in 2nd matrix\n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			cout<<"Enter vaue for index "<<i<<" "<<j;			
			cin>>b[i][j];
		}
	cout<<"\n";
	for(int p=0;p<n;p++)
	for(int i=0;i<n;i++)
	{    
	
	sum=0;
		for(int j=0;j<n;j++)
			sum=sum+a[i][j]*b[j][i]	;
	c[p][i]=sum;
	}
	cout<<"\n";
	cout<<"The resulted matrix is:\n";
		for(int i=0;i<n;i++)
		{
		cout<<"\n";
		
		for(int j=0;j<n;j++)
			cout<<c[i][j]<<" ";
	    }
	
	return 0;
}
