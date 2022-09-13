#include<iostream>
using namespace std;

int main()
{
    //clear another bank example from ppt of switch case send yesterday.

    int Command = 0, Money = 0, Balance = 100;


    cout<<endl<<"Enter command no.:"<<"0 - quit"
    <<" 1 - deposite money"<< " 2 - withdraw money"
    <<" 3 - print balance";   
    cin>>Command;        


    switch (Command)
   {
   case 0: // Quit code
        cout << "See you later!" << endl;
        break;
   case 1: // Deposit code
        cout << "Enter deposite amount:";
        cin >> Money;
        Balance = Balance + Money;
        break;
   case 2: // Withdraw code
        cout << "Enter withdraw amount:";
        cin >> Money;
        Balance = Balance - Money;
        break;
   case 3: // Print balance code
        cout << "Current balance =" << Balance << endl;
        break;
    default:
        cout<<"OOps try again!"<<endl;
        break;



    }

cout << "Final balance =" << Balance << endl;
}