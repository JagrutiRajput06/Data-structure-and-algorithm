#include<iostream>
using namespace std;

int main()
{
    /* Q4: A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel
under consideration and output the grade of the steel.    */

    int hardness, ten_stren;
    float carb_cont;

    cout<<endl<<"Enter values of hardness which is greater than 50:";
    cin>>hardness;

    cout<<endl<<"Enter values of carbon content which is less than 0.7:";
    cin>>carb_cont;

    cout<<endl<<"Enter values of tensile strength which is greater than 5600:";
    cin>>ten_stren;

    if(hardness>50 && carb_cont<0.7 && ten_stren>5600)
        cout<<endl<<"Grade is 10";
    else if(hardness>50 && carb_cont<0.7)
        cout<<endl<<"Grade is 9";
    else if(carb_cont<0.7 && ten_stren>5600)
        cout<<endl<<"Grade is 8";
    else if(hardness>50 && ten_stren>5600)
        cout<<endl<<"Grade is 7";
    else if(hardness > 50 || carb_cont < 0.7 || ten_stren > 5600)
        cout<<endl<<"Grade is 6";
    else if(hardness < 50 && carb_cont > 0.7 && ten_stren < 5600)
        cout<<endl<<"Grade is 5";

    return 0;


}