#include<iostream>
using namespace std;

int main()
{
    /* Q11: A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer */

    int amount;

    cout<<endl<<"Enter amount to be withdrawn (in hundreds):";
    cin>>amount;

    cout<<endl<<"The no. of 100 notes is ="<<amount/100;
    cout<<endl<<"The no. of 50 notes is ="<<(amount%100)/50;
    cout<<endl<<"The no. of 10 notes is ="<<(((amount%100)%50)/10);


    return 0;
}