#include<iostream>
using namespace std;

int main()
{
    /* Q9:Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter.   */

    float len,bredth,area,peri;

    cout<<endl<<"Enter the length and breadth of rectangle:";
    cin>>len>>bredth;

    area=len*bredth;

    peri=2*(len+bredth);

    cout<<endl<<"Area of rectangle is :"<<area;
    cout<<endl<<"Perimeter of rectangle is :"<<peri;
    
    if(area>peri)
        cout<<endl<<"Area of rectangle is greater than its perimeter.";
    else
        cout<<endl<<"Area of rectangle is less than its perimeter.";

    return 0;
}