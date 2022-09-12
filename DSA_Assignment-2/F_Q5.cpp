#include<iostream>
using namespace std;

int main()
{
    /* Q5: A library charges a fine for every book returned late. For first
5 days the fine is 50 paise, for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled. Write a program to
accept the number of days the member is late to return the
book and display the fine or the appropriate message.  */

int days;

cout<<endl<<"Enter the no. of late days to return book:";
cin>>days;

if(days<=5)
    cout<<endl<<"late fine to return book is 50 paise.";
else if(days>=6 && days<=10)
    cout<<endl<<"late fine to return book is 1 Rs/-.";
else if(days>=11 && days<=20)
    cout<<endl<<"late fine to return book is 5 Rs/-.";
else if(days>30)
    cout<<endl<<"late fine to return book is your membership will be cancelled.";

return 0;
}
