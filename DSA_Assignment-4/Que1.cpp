#include<iostream>
using namespace std;

int main()
{
    // Que1: C++ Program to Reverse an Integer 
    int reverse=0, n, rem;

    cout<<endl<<"Enter a value of n:";
    cin>>n;

    while (n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }

    cout<<endl<<"Reversed no.="<<reverse;

    return 0;
    
}