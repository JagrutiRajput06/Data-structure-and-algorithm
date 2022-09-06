#include<iostream>
using namespace std;

int main()
{
    /*Q8 If a five-digit number is input through the keyboard, write a
program to reverse the number. */
int n1, a, b, c, d, e;

cout<<endl<<"Enter five digit number =";
cin>>n1;

e=n1%10;
d=(n1/10)%10;
c=(n1/100)%10;
b=(n1/1000)%10;
a=(n1/10000);


n1= e*10000 + d*1000+ c*100 + b*10+ a;

cout<<endl<<"reverse of five digits="<<n1;

    
    return 0;
}