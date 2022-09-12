#include<iostream>
using namespace std;

int main()
{
    /* Q12: Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0).    */

    int x,y;

    cout<<endl<<"Enter value of x point:";
    cin>>x;

    cout<<endl<<"Enter value of y point:";
    cin>>y;

    if(x==0 && y==0)
        cout<<endl<<"The points lies on origin";
    else if(x==0)
        cout<<endl<<"The points lies on y-axis";
    else if(y==0)
        cout<<endl<<"The points lies on x-axis";
    else
        cout<<endl<<"The points lies on nieghther x-axis nor y-axis";
    
    return 0;

}