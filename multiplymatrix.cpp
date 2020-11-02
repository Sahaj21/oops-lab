#include<iostream>
using namespace std;


int main()
{   int n; 
	
	cin>>n;
	
	int a[n][n]	, b[n][n],c[n][n],sum=0;
	cout<<"Enter value in matrix 1";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\n";
 cout<<"Enter value in matrix 2";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"\n";
		for(int p=0;p<n;p++)
	for(int i=0;i<n;i++)
	{    
	
	sum=0;
		for(int j=0;j<n;j++)
		{
		sum=sum+a[i][j]*b[j][i]	;
		}
		c[p][i]=sum;
	}
	cout<<"\n";
	
		for(int i=0;i<n;i++)
		{
		cout<<"\n";
		
		for(int j=0;j<n;j++)
		{
			cout<<c[i][j]<<" ";
		}
	    }
	
	return 0;
}
