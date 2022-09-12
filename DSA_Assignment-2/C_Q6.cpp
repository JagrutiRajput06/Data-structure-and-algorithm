#include<iostream>
using namespace std;

int main()
{
    /* Q6: If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.  */

    int Ram, Shyam, Ajay;

    cout<<endl<<"Enter the age of Ram:";
    cin>>Ram;

    cout<<endl<<"Enter the age of Shyam:";
    cin>>Shyam;

    cout<<endl<<"Enter the age of Ajay:";
    cin>>Ajay;

    if (Ram<Shyam && Ram<Ajay )
        cout<<endl<<"Ram is younger than Shyam and Ajay";
    else if(Shyam<Ram && Shyam<Ajay)
        cout<<endl<<"Shyam is younger than Ram and Ajay";
    else
        cout<<endl<<"Ajay is younger than Ram and Shyam";

    return 0;
    

}