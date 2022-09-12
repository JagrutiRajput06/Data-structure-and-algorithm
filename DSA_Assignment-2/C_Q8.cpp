#include<iostream>
using namespace std;

int main()
{
  /* Q8:Find the absolute value of a number entered through the
keyboard.  */  

  int abs_val;

  cout<<endl<<"Enter a value:";
  cin>>abs_val;

  abs_val= abs(abs_val);

  cout<<endl<<"Absolute value is ="<<abs_val;

  return 0;
}