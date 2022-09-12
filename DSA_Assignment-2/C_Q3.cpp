#include<iostream>
using namespace std;

int main()
{
    /* Q3: Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)  */

int year;

cout<<endl<<"Enter the year:";
cin>>year;

if (year%4==0)
{
    cout<<endl<<"This is leap year";
}
else if (year%100==0)
{
    cout<<endl<<"This is leap year";
}
else if (year%400==0)
{
    cout<<endl<<"This is leap year";
}
else
{
    cout<<endl<<"This is not leap year";
}

return 0;



}