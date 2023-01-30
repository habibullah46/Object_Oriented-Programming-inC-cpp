#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	char p;
	int a;
	int array[]={2,3,4,1,5};
	cout<<"Enter any number: ";
	cin>>a;
		cout<<"Searing";
		for(int j=0; j<4; j++)
		{
			cout<<".";
			Sleep(1000);		
		}
			system("cls");
	for(int i=0; i<5; i++)
	{
	
		
		if(a==array[i])
		{
			cout<<"\nLocation of your number is: "<<i+1;
			p='t';
		}
	
	}
	if(p!='t')
		{
			cout<<"Sorry! We can't fount location of your number you enter!!";
			
		}
}
