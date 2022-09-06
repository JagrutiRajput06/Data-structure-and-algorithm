#include<iostream>
using namespace std;

int main()
{
   /* Q3 If the marks obtained by a student in five different subjects
     are input through the keyboard, find out the aggregate marks
     and percentage marks obtained by the student. Assume that
     the maximum marks that can be obtained by a student in each
     subject is 100. */
     float sub1,sub2,sub3,sub4,sub5,total,percent_marks;
    
    cout<<endl<<"Question 3:";
    cout<<endl<<"Enter value of sub1 =";
    cin>>sub1;
    cout<<endl<<"Enter value of sub2 =";
    cin>>sub2;
    cout<<endl<<"Enter value of sub3 =";
    cin>>sub3;
    cout<<endl<<"Enter value of sub4 =";
    cin>>sub4;
    cout<<endl<<"Enter value of sub5 =";
    cin>>sub5;

    total=sub1 + sub2 + sub3 + sub4 + sub5;
    percent_marks= total/5;

    cout<<endl<<"Aggregate marks of Student:"<<total;
    cout<<endl<<"Percentage marks of Student:"<<percent_marks;
 

    return 0;

}