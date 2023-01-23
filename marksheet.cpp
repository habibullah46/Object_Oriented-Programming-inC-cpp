#include<iostream>
using namespace std;
int obtainMarks_Calculator(int, int , int, int , int );//intigers
int main()
{
   
   int maths, computer , physics , urdu, english;
   
   float totalMarks=500;
   cout<<" please enter your math marks";
    cin>>maths;
    
    cout<<"plase enter your computer marks";
    cin>>computer;
    
    cout<<"please enter your physics marks";
    cin>>physics;
    
    cout<<"please enter your urdu marks";
    cin>>urdu;
    
    cout<<"please enter your english marks";
    cin>>english;
  
   int obtainmarks=obtainMarks_Calculator (maths, computer , physics , urdu , english);
   //cout<<obtainmarks;
   cout<<endl;
   
   //percentage formula => (obtain_marks/total_marks)*100
   
   float percet=(obtainmarks/totalMarks)*100;
   
   cout<<"Four Percentage is  "<<percet;
   
}
int obtainMarks_Calculator(int maths , int computer, int physics, int urdu , int english)
{
    float obtainMarks= maths+computer + physics+ urdu+ english;
    return obtainMarks;
    
}

