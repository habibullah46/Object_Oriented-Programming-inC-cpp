#include<iostream>
using namespace std;
class Myclass //the classs
{
	public:
		void myMethod(); // Method \ function declaration 
};
//Method/Function outside the class

 void Myclass::myMethod()
{
	cout<<"Hello World!";
}
int main()
{
   //Habibullah........
   Myclass myobj; //Create an obj of myclass
   myobj.myMethod();  //call function / methode
   
}
