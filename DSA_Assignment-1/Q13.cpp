#include<iostream>
using namespace std;

int main()
{
    /* Q13: If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402. */

int num, a, b, c, d, e;

cout<<endl<<"Enter five digit number =";
cin>>num;

e=num%10;
num=num/10;
d=num%10;
num=num/10;
c=num%10;
num=num/10;
b=num%10;
num=num/10;
a=num%10;
num=num/10;

a=a+1;
b=b+1;
c=c+1;
d=d+1;
e=e+1;
cout<<endl<<"The new no. is ="<<a;
cout<<b;
cout<<c;
cout<<d;
cout<<e;


    return 0;
}