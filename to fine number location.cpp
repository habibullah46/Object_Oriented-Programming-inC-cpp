#include<iostream>
using namespace std;
int main()
{
	int a;
	char op;
	int array[]={1,4, 3, 5, 6};
		cout<<"Please etner any number: ";
	cin>>a; 
	for(int i=0; i<5; i++)
	{

	if(a==array[i])
	{
		cout<<"The number is found in location:"<<i+1;
		op='t';
	
	}
}
   if(op!='t')
   cout<<" value is not found in array ";
}
