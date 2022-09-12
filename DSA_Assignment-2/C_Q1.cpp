#include<iostream>
using namespace std;

int main()
{
    /* Q1: If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred. */

int cost_price, selling_price;
float profit, loss, Amount;

cout<<endl<<"Enter cost price:";
cin>>cost_price;
cout<<endl<<"Enter selling price:";
cin>>selling_price;

if (cost_price<selling_price)
{
    cout<<endl<<"Seller made profit";
}
else
{
    cout<<endl<<"Seller made loss";
}

Amount=selling_price-cost_price;

if (selling_price>cost_price)
{
    cout<<endl<<"Amount of profit seller made="<<Amount;
}
else
{
    cout<<endl<<"Amount of loss seller incured="<<Amount;
}

return 0;

}