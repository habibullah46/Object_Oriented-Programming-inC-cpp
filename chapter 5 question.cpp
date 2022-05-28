//question no 1:

#include<iostream>
using namespace std;

void shoukat (int &,int &);

int main()
{
	int valueOne ,valueTwo;
	cout<<"Enter first number : ";
	cin>>valueOne;
	cout<<"Enter second number : ";
	cin>>valueTwo;
	shoukat(valueOne,valueTwo);
	cout<<"First number is : "<<valueOne;
	cout<<"\nSecond number is : "<<valueTwo;
    
  
}

void shoukat(int &valueOne, int &valueTwo)
{
	if(valueOne<valueTwo)
		valueOne=0;
	else
		valueTwo=0;
}
=================================================================================
//question no 2.

#include<iostream>

using namespace std;

double power(double n, int p=2);

int main()
{

 double n; int p=2;
 

 {
 cout<<"Enter n: "; 
 cin>> n;
 cout<<"Enter p: "; 
 cin>> p;
 cout <<"The power is "<<power(n, p);

 }

}

double power(double n, int p)
{ for(int ret=1; p>0; p--) ret*=n;
 //return;
}

=============================================================================================
//answer no 3:
#include<iostream>
using namespace std;

void zero_small(int &,int &);

int main()
{
	int valueOne ,valueTwo;
	cout<<"Enter first number : ";
	cin>>valueOne;
	cout<<"Enter second number : ";
	cin>>valueTwo;
	zero_small(valueOne,valueTwo);
	cout<<"First number is : "<<valueOne;
	cout<<"\nSecond number is : "<<valueTwo;
    
        return 0;
}

void zero_small(int &valueOne, int &valueTwo)
{
	if(valueOne<valueTwo)
		valueOne=0;
	else
		valueTwo=0;
}
=============================================================================================
//answer no 3:

#include <iostream>
using namespace std;

struct Distance
 {
    int feet;
    float inch;
}
d1 , d2, sum;

int main() 
{
    cout << "Enter 1st distance," << endl;
    
    cout << "Enter feet: ";
    cin >> d1.feet;
    
    cout << "Enter inch: ";
    cin >> d1.inch;

    cout << "\nEnter information for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;

    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.inch+d2.inch;

    // changing to feet if inch is greater than 12
    if(sum.inch > 12) {
        // extra feet
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    } 

    cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}
===================================================================================================
//answer no5:
#include<iostream>
using namespace std;
int hms_to_sec(int hr,int min, int sec); //function declear
int main()
{
int hr,min,sec;


int result =hms_to_sec(hr,min,sec);
cout << "result = " << result;

return 0;
}

int hms_to_sec(int hr,int min, int sec)
{
int seconds =0;
cout << "please enter hr" << endl;
cin >> hr;
cout << "please enter min" << endl;
cin >> min;
cout << "please enter sec" << endl;
cin >> sec;

seconds = (hr*60*60)+(min*60)+sec;
return seconds;

}
==========================================================================================
//answer no 6:

#include <iostream>
using namespace std;

double power(double, int=2);
char power(char, int=2);
int power(int, int=2);
long power(long, int=2);
float power(float, int=2);

int main()
{
    double num1;
	char num2;
	int num3;
	long num4;
	float num5;

	cout << "Enter a double value: ";
	cin >>num1;
	cout << "Power of " << num1 << " is: " <<power(num1) << endl;

	cout << "\nEnter a char value: ";
	cin >>num2;
	cout << "Power of " << num2 << " is: " << power(num2) << endl;

	cout << "\nEnter a int value: ";
	cin >> num3;
	cout << "Power of " << num3 << " is: " << power(num3) << endl;

	cout << "\nEnter a long value: ";
	cin >> num4;
	cout << "Power of " << num4 << " is: " << power(num4) << endl;

	cout << "\nEnter a float value: ";
	cin >> num5;
	cout << "Power of " << num5 << " is: " << power(num5) << endl;

    return 0;
}

double power(double d, int p)
 {
	double power = 1;
	for(int i=1; i<=p; i++)
		power *= d;
	return power;
}


char power(char ch, int p)
 {
	char power = 1;
	for(int i=1; i<=p; i++)
		power *= ch;
	return power;
}


int power(int no1, int p) 
{
	int power = 1;
	for(int i=1; i<=p; i++) 
		power *= no1;
	return power;
}


long power(long numb, int p)
 {
	long power = 1;
	for (int i=1; i<=p; i++)
		power *= numb;
	return power;
}


float power(float number, int p)
 {
	float power = 1.0;
	for (int i=1; i<=p; i++)
		power *= number;
	return power;
}
=======================================================================================
//answer no 8:

//annswer no 8

#include<iostream>
using namespace std;
void swap(int& valueOne, int& valueTwo);
int main()
{
 int valueOne, valueTwo;
 cout<<"Enter valueOne : "; 
 cin >>valueOne;
 cout<<"Enter valueTwo : "; 
 cin >>valueTwo; swap(valueOne, valueTwo);
 cout<<"Now valueOne value is : "<<valueOne<<" and valueTwo value is : "<<valueTwo;
}

void swap(int& valueOne, int& valueTwo)
{
int c=valueOne; valueOne=valueTwo; valueTwo=c;
}
===============================================================================================================
//answer no 9:

#include<iostream>
using namespace std;
struct time{int hours; int minutes; int seconds;};
void swap(time& t1, time& t2);

int main()
{
 time t1, t2; char c;
 cout<<"In [hh:mm:ss] format;\n";
 cout<<"Enter first time value : "; 
 cin >>t1.hours>>c>>t1.minutes>>c>>t1.seconds;
 cout<<"Enter second time value: "; 
 cin >>t2.hours>>c>>t2.minutes>>c>>t2.seconds;
 swap(t1, t2);
 cout<<"Now first time is : "  <<t1.hours<<c<<t1.minutes<<c<<t1.seconds
  <<" and second time is : "<<t2.hours<<c<<t2.minutes<<c<<t2.seconds;
}

void swap(time& a, time& b)
{
time c=a; a=b; b=c;
}
===============================================================================================
//answer no 10:

#include <iostream>
using namespace std;


int funCalls=0;


void fun1() 
{
    funCalls++;
    cout << "I am fun1 and I have been called " << funCalls << " times" << endl;
}


void fun2() 
{
    static int funCalls=0;
    funCalls++;
    cout << "I am fun2 and I have been called " << funCalls << " times" << endl;
}


int main()
 {
    for (int i=0; i<10; i++)
        fun1();


    cout << endl;
    for (int i=0; i<10; i++)
        fun2();
}
===========================================================================================


