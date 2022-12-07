#include<iostream>
using namespace std;
void line();
int main()
{
	int row;
	int col;
	  int i,j;
	
	
	int m1[4][4];
	int m2[4][4];
	int sum[4][4];
	cout<<"\nEnter the number of row and column\n";
	cin>>row >>col;
		line();
	cout<<"\nenter the "<<row*col<<" elments of the first matrix\n";
  
    
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>m1[i][j];
		}
	}
		line();
		cout<<"\nenter the "<<row*col<<" elments of the second matrix\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>m2[i][j];
		}
	}
		line();
	//sum of the matrices
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
		}
	}
		line();
	cout<<"\nThe first matrix is \n";
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<m1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nThe second matrix is \n";
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<m2[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nThe sum of two matrices is \n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<sum[i][j]<<"\t";
		}
		cout<<endl;
	}	
}
	void line()
	{
	
	  cout<<"*******************************************************";
	  }
