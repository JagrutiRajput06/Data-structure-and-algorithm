#include<iostream>
using namespace std;

int main()
{
    /* Q12: If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item. */
float Sell_price, profit_price, cost_price;

cout<<endl<<"Enter Selling price:";
cin>>Sell_price;

cout<<endl<<"Enter profit price:";
cin>>profit_price;

cost_price=(Sell_price-profit_price)/15;

cout<<endl<<"The cost price of one item is="<<cost_price;
    return 0;
}