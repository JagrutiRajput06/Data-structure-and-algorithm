#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    /* Q11: Given the coordinates (x, y) of a center of a circle and it’s radius, 
write a program which will determine whether a point lies inside
the circle, on the circle or outside the circle.
(Hint: Use sqrt( ) and pow( ) functions)   */

    int x1, y1, x2, y2, radius;
    float pc;

    cout<<endl<<"Enter the center co-ordinates of the circle: ";
    cin>>x1>>y1;
    cout<<endl<<"Enter the radius of the circle: ";
    cin>>radius;

    cout<<endl<<"Enter the point co-ordinates: ";
    cin>>x2>>y2;

    pc = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));

    if(pc>radius)
        cout<<endl<<"Point ("<<x2 <<" "<<y2<<")lies outside the circle.";
    else if(pc<radius)
        cout<<endl<<"Point ("<<x2 <<" "<<y2<<")lies inside the circle.";
    else if(pc==radius)
        cout<<endl<<"Point ("<<x2 <<" "<<y2<<")lies on the boundary of circle.";
    else
        cout<<endl<<"Wrong Entry";


    return 0;
}