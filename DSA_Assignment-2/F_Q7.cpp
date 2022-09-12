#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    /* Q7: If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
isosceles, equilateral, scalene or right angled triangle. 
 */

    float a,b,c;
	
	cout<<endl<<"Enter the sides of the triangle : ";
	cin>>a>>b>>c;
	

    if((a == b) && a != c|| (a == c) && a!= b || (c == b) && c != a)
		cout<<endl<<"The triangle is isosceles.";
	
    else if(a == b && a == c)
		cout<<endl<<"The triangle is equilateral triangle.";
	
	else if(a != b && b != c && a != c)
		cout<<endl<<"The triangle is scalene.";
		
	else if((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(c,2) + pow(b,2) == pow(a,2)) || pow(a,2) + pow(c,2) == pow(b,2))
		cout<<endl<<"The triangle is right triangle.";
		
	return 0;
}