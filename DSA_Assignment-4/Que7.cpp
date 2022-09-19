#include<iostream>
using namespace std;

int main()
{
    // Que7: write a program to display the odd no. from 1 to 101, and also to display their sum.

    int i = 1, sum = 0;
    cout<<endl<<"The odd no. are:";

do {

sum = sum + i;

i = i + 2;
cout<<endl<<i;

}while(i <= 101);

    cout<<endl<<"The sum is="<<sum;

return 0;

    
}