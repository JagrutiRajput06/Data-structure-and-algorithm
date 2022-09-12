#include<iostream>
using namespace std;

int main()
{
    /* Q3: An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.

Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured.    */

char health,loc,gender;
int age;

cout<<endl<<"Enter Heath E For Excellent And P For Poor ";
cin>>health;

cout<<endl<<"Enter Location C For City And V For Village ";
cin>>loc;

cout<<endl<<"Enter Gender M For Male And F For Female ";
cin>>gender;

cout<<endl<<"Enter Age ";
cin>>age;


if((health=='E')&&(loc=='C')&&(gender=='M')&&(age>=25||age<=35))
    cout<<endl<<"The Premium Is Rs.4 Per Thousand And His Policy Cannot Exceed Rs.2 Lakhs";
else if((health=='E')&&(loc=='C')&&(gender=='F')&&(age>=25||age<=35))
    cout<<endl<<"The Premium Is Rs.3 Per Thousand And Her Policy Cannot Exceed Rs.1 Lakhs";
else if((health=='P')&&(loc=='V')&&(gender=='M')&&(age>=25||age<=35))
    cout<<endl<<"The Premium Is Rs.6 Per Thousand And Cannot Exceed Rs. 10,000";
else
cout<<endl<<"not Insured";

return 0;
}