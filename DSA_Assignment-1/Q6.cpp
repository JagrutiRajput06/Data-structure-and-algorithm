#include<iostream>
using namespace std;

int main()
{
    /* Q6 Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/
    int C,D, temp;
    
    cout<<endl<<"Enter no. for C =";
    cin>>C;
    cout<<endl<<"Enter no. for D =";
    cin>>D;

    temp=C;
    C=D;
    D=temp;

    cout<<endl<<"Content of C ="<<C;
    cout<<endl<<"Content of D ="<<D;
    
    return 0;
}