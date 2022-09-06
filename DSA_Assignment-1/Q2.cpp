#include<iostream>
using namespace std;

int main()
{
    /* Q2:  The distance between two cities (in km.) is input through the
     keyboard. Write a program to convert and print this distance
     in meters, feet, inches and centimeters. */
     
     float city, meters, feet, inches, centimeters;

     cout<<endl<<"Question 2:";
     cout<<endl<<"Enter the Distance of city =";
     cin>>city;

     meters= city*1000;
     feet= city*3280.8;
     inches= city*39370;
     centimeters= city*100000;

     cout<<endl<<"meter is = "<<meters;
     cout<<endl<<"feet is = "<<feet;
     cout<<endl<<"inches is = "<<inches;
     cout<<endl<<"centimeters is  = "<<centimeters;
    
    
    return 0;
}