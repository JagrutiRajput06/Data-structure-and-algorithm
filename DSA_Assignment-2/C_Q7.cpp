#include<iostream>
using namespace std;

int main()
{
    /* Q7: Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees.   */

    int ang_1,ang_2,ang_3,triangle;

    cout<<endl<<"Enter the values of three angles of triangle:";
    cin>>ang_1>>ang_2>>ang_3;

    triangle=ang_1+ang_2+ang_3;

    if(triangle==180 && ang_1!=0 && ang_2!=0 && ang_3!=0)
        cout<<endl<<"A triangle is valid";
    else
        cout<<endl<<"A triangle is invalid";
    
    return 0;


}