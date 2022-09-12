#include<iostream>
using namespace std;

int main()
{
    /* Q1: Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical
operators && and ||.   */

    int year;

cout<<endl<<"Enter the year:";
cin>>year;

if (year%4==0 && year%100==0 && year%400==0)
    cout<<endl<<"This is leap year";
else
    cout<<endl<<"This is not leap year";

return 0;
}