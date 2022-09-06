#include<iostream>
using namespace std;

int main()
{
    /*Q7 If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)*/
int num, a, b, c, d, e, A, B, C, D, E, sum;

cout<<endl<<"Enter five digit number =";
cin>>num;

a=num/10;
A=num%10;
b=a/10;
B=a%10;
c=b/10;
C=b%10;
d=c/10;
D=c%10;
e=d/10;
E=d%10;
sum=A+B+C+D+E;

cout<<endl<<"sum of five digits="<<sum;
    
    return 0;
}