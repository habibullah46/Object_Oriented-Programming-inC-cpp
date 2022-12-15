#include<iostream>
using namespace std;
struct labrary
{
	string name;
	int price;
	int page;
};
struct second_labrary
{
	string name;
	int price;
	int page;
};
int main()
{
   //Habibullah........
   int choice;
   labrary lby;
   cout<<"\t\t\t\t<=first Labrary Details=>"<<endl;
   cout<<"\t\t\t\t-------------------------\n\n\n";
   cout<<"Enter Your choice to check most costly book"<<endl;
   cout<<"1.Top 3 famous Pakistani books \n2.Top 10 famous pogramming book"<<endl;
   cout<<"3.Top 10 famous navel Books"<<endl; 
   cin>>choice;
   switch(choice)
   {
   	case 1:
   		cout<<"1.Book Title: Gadhay hamray bai hen\nWriter: Mustansar Hussain Tarar\nPrice: 2500"<<endl;
   		cout<<"2.Book Title:Chota Sheher baray log\nWriter :Bano Qudsia\nPrice: 3000"<<endl;
   		cout<<"3.Book Title: Namrood Ki Khudai\nWriter:Saadat Hassan Manto\n Price: 2000"<<endl;
		   break;
   }
   
}
