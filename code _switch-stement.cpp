#include<iostream>
using namespace std;
int main()
{
  //I_Am_Habibullah_Baltistani
  int valueOne;
  int valueTwo;
  int choice;
  
  cout<<"Please enter the first value:"<<endl;
  cin>>valueOne;
  cout<<"Please enter the second value:"<<endl;
  cin>>valueTwo;
  cout<<"Please enter your choice:\n1.Add\n2.sub\n3.multi\n4.Divid"<<endl;
  cin>>choice;
  switch(choice)
  {
  	case 1:
  		cout<<"The addition of the values is :"<<valueOne+valueTwo;
  		break;
  	case 2:
	    cout<<"The subtruction of the values is : "<<valueOne-valueTwo;
		break;
	case 3:
	    cout<<"The Multiplication of the values is :"<<valueOne*valueTwo;
		break;			
		
	default:
	cout<<"Error!";	
  }
}
