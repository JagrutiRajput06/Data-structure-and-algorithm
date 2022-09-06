#include<iostream>
using namespace std;

int main()
{
    /* Q9: If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number. */
    int num, a,b,c,d,A,B,C,D,sum;

    cout<<endl<<"Enter the 4 Digit number:";
    cin>>num;

    a=num/10;
    A=num%10;
    b=a/10;
    B=a%10;
    c=b/10;
    C=b%10;
    d=c/10;
    D=c%10;

    sum= A+D;

    cout<<endl<<"Sum of first and last digit number is ="<<sum;
    
    return 0;
}