//Program that prints the pyramid pattern but it takes number from user and prints according to that number using nested loops.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    /*
    In nested for loop the outer loop is responsible for number of rows, the first inner loop is responsible for spaces, and the second inner loop is 
    responsible for printing(what you desire).So, here we declare variables, for rows we use 'r' for spaces we use 'sp' for printing we use 'p', and
    for input a number we use 'no'.
    */
    
    int r,sp,p,no,n;
    
    cout<<"Enter a number for which you wanted to print pattern\n";
    cin>>no;
    
    n=no;
    
    for(r=1;r<=no;r++)//As we need rows which is equal to number that user input.so we initialize r=1 and apply condition r<=no and r++.
    {
                     
       for(sp=1;sp<=n;sp++)/*As we need spaces that are equal to number input by user.Let suppose user enters 5 so it prints 5 spaces first and went
       out of loop and execute n-- it subtract 1 from the number and we get 4 spaces next time and so on.  */
       {
       
       cout<<" ";
       
       }   
       n--;   
          
       
       for(p=1;p<=r;p++)/*in this we initialized p=1 and p<=r so it prints number that is the row number means when r=1 it prints 1 when r=2 it prints
       2 for two times and so on. Remember we also have to add space after printing the number see pattern there is a space after every number.*/
       {
       cout<<r<<" " ;
       }     
       
       cout<<endl;//We also need a line after a row so it ends the current row line and moves to next line as in given pattern.
    }

          getch();
}
