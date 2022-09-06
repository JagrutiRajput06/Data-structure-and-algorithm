#include<iostream>
using namespace std;

int main()
{
    /* Q5 The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/

float len, breadth, radius, area, peri, area_cir, circum, pi;
pi=3.14;

cout<<endl<<"Enter the length of rectangle =";
cin>>len;
cout<<endl<<"Enter the breadth of rectangle =";
cin>>breadth;

area= len*breadth;
peri= 2*(len + breadth);

cout<<endl<<"area of rectangle is ="<<area;
cout<<endl<<"perimeter of rectangle is ="<<peri;


cout<<endl<<"Enter the radius of circle =";
cin>>radius;

area_cir= pi* radius * radius;
circum= 2 * pi* radius;


cout<<endl<<"area of circle is ="<<area_cir;
cout<<endl<<"circumfernce of circle is ="<<circum;

    return 0;

}