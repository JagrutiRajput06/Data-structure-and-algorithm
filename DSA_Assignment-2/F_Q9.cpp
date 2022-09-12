#include<iostream>
using namespace std;

int main()
{
    /* Q9: A university has the following rules for a student to qualify
for a degree with A as the main subject and B as the
subsidiary subject:
(a) He should get 55 percent or more in A and 45 percent or
more in B.
(b) If he gets than 55 percent in A he should get 55 percent or
more in B. However, he should get at least 45 percent in
A.
(c) If he gets less than 45 percent in B and 65 percent or more
in A he is allowed to reappear in an examination in B to
qualify.
(d) In all other cases he is declared to have failed.
Write a program to receive marks in A and B and Output
whether the student has passed, failed or is allowed to
reappear in B. */

int per_a,per_b;

cout<<endl<<"Enter percentage of A and B: ";
cin>>per_a>>per_b;

if(per_a>=55 && per_b>=45)
    cout<<endl<<"Student is passed";
else if(per_a>=45 && per_a<55 && per_b>=55)
    cout<<endl<<" Student is passed";
else if(per_b<45 && per_a>=65)
    cout<<endl<<"Student is allowed to reappear in an exam";
else
cout<<endl<<"Student is failed";

return 0;
}