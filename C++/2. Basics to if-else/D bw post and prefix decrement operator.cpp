//Program to differentiate between postfix and prefix decrement operator. remember postfix is a++/a-- and prefix is ++a/--a.

#include<iostream>
using namespace std;
int main()
{
 int x,a;
 cout<<"Enter any value"<<endl;
 cin>>a;
 cout<<"Enter 1 for postfix decrement operator OR"<<endl;
 cout<<"Enter 2 for prefix decrement operator"<<endl;
 cin>>x;
 if(x=1)
 {
  a--;      //In this case first the value of variable is used in the operation and then variable is decremented by 1.
  cout<<a<<endl;      
        }
  if(x=2)
  {
  --a;     //In this case first the value of variable is decremented by 1 and then the value of variable is used in the operation.
  cout<<a<<endl;       
         }
     
 system("pause");   
}
