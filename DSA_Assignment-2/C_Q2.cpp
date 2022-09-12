#include<iostream>
using namespace std;

int main()
{
    /* Q2: Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number.  */

int num;

cout<<endl<<"Enter any number:";
cin>>num;

if (num%2==0)
{
    cout<<endl<<"The number is Even";
}
else
{
    cout<<endl<<"The number is Odd";
}

return 0;

}