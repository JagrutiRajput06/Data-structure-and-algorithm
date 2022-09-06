#include<iostream>
using namespace std;

int main()
{
    /* Q1:  Ramesh’s basic salary is input through the keyboard. His
    dearness allowance is 40% of basic salary, and house rent
    allowance is 20% of basic salary. Write a program to calculate
    his gross salary */
    
    float sal, dear_allow, house_allow, gross_sal;

    cout<<endl<<"Question 1:";
    cout<<endl<<"Enter basic salary =";
    cin>>sal;

    dear_allow= 0.4*sal;
    house_allow= 0.2*sal;

    gross_sal= dear_allow + house_allow + sal;

    cout<<endl<<"Dearness Allowance = "<<dear_allow;
    cout<<endl<<"House rent Allowance = "<<house_allow;
    cout<<endl<<"Gross Salary is = "<<gross_sal;

    return 0;

}


    



     


    



    



 



    











