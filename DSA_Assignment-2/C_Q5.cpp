#include<iostream>
using namespace std;

int main()
{
    /* Q5: A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not. 
  */

  int num,a,b,c,d,e, reverse_num;

 cout<<endl<<"Enter the five digit number:";
 cin>>num;

 e=num%10;
 d=(num/10)%10;
 c=(num/100)%10;
 b=(num/1000)%10;
 a=(num/10000);

 reverse_num= e*10000 + d*1000 + c*100 + b*10 + a;

cout<<endl<<"reverse of five digits="<<reverse_num;

if (reverse_num==num)
  cout<<endl<<"The given numbers are equal";
else
  cout<<endl<<"The given numbers are not equal";

return 0;


 
}