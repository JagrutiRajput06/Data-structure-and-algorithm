#include<iostream>
using namespace std;

int main()
{
    /* Q6: If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
valid or not. The triangle is valid if the sum of two sides is
greater than the largest of the three sides.  */

    int s1,s2,s3;

    cout<<endl<<"Enter three values of triangle:";
    cin>>s1>>s2>>s3;

    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1)
        cout<<endl<<"The given triangle is not valid";
    else
        cout<<endl<<"The given triangle is valid";
    
    return 0;
}