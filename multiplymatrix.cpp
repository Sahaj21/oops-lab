#include<iostream>
int main()
{   int n; 
	
	cin>>n;
	
	int a[n][n],b[n][n],c[n][n],sum=0,i,j,p;
	cout<<"\nEnter value in 1st matrix\n";
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cout<<"Enter vaue for index "<<i<<" "<<j;
			cin>>a[i][j];
		}
	cout<<"\n";
 	cout<<"Enter value in 2nd matrix\n";
	for(i=0;i<n;i++)
		for( j=0;j<n;j++)
		{
			cout<<"Enter vaue for index "<<i<<" "<<j;			
			cin>>b[i][j];
		}
	cout<<"\n";
	for(p=0;p<n;p++)
	for( i=0;i<n;i++)
	{    
	
	sum=0;
		for(j=0;j<n;j++)
			sum=sum+a[i][j]*b[j][i]	;
	c[p][i]=sum;
	}
	cout<<"\n";
	cout<<"The resulted matrix is:\n";
		for(i=0;i<n;i++)
		{
		cout<<"\n";
		
		for( j=0;j<n;j++)
			cout<<c[i][j]<<" ";
	    }
	
	return 0;
}
