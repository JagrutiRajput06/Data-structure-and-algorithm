#include<iostream>
using namespace std;

int main()
{
    /* Q10: The policy followed by a company to process customer orders
is given by the following rules:
(a) If a customer order is less than or equal to that in stock
and has credit is OK, supply has requirement.
(b) If has credit is not OK do not supply. Send him
intimation.
(c) If has credit is Ok but the item in stock is less than has
order, supply what is in stock. Intimate to him data the
balance will be shipped. 
  */

int stk,odr,crdt;
	
	cout<<endl<<"Hello!!\nThe price of our item is 100 Rs. per item.";
	
	cout<<endl<<"Enter the stock company have : ";
	cin>>stk;
	
	cout<<endl<<"Enter the quantity ordered : ";
	cin>>odr;
	
	cout<<endl<<"Enter the credit done by customer : ";
	cin>>crdt;
	
	if(stk>=odr && crdt>=(100*odr))
	  cout<<endl<<"Your order has been placed successfully and will be delivered to you shortly.";
	
	else if(stk>=odr && crdt<(100*odr))
	  cout<<endl<<"Your payment done is not sufficient for your ordered items.Try again!!";
		
	else if(stk<odr && crdt>=(100*odr))
		cout<<endl<<"We have not sufficient items, but they will delivered to you shortly.";

  return 0;
}