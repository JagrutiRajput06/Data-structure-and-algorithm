#include<iostream>
using namespace std;

int main()
{
    /* Q2:Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.    */

    char ch;
	
	cout<<endl<<"Enter a character : ";
	cin>>ch;
	
	if(ch>=65 && ch<=90)
		cout<<endl<<"You have entered a capital letter.";
	else if(ch>=48 && ch<=57)
		cout<<endl<<"You have entered a number.";
	else if(ch>=97 && ch<=122)
		cout<<endl<<"You have entered a small letter.";
	else
		cout<<endl<<"You have entered a special symbol.";
	
	return 0;
}