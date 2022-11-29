#include<iostream>
using namespace std;

int main()
{

/* Write a Program to check a given number representation is in binary or not?
User input will contain a single integer n. 0≤n≤30,000 */

int n;
int count = 0, val;

cout<<endl<<"Enter the number to check given no. is binary or not:";  //0≤n≤30,000
cin>>n;

    while(n != 0)
    {
        val = n % 10;

        if((val != 1) && (val != 0))
        {
            count++;
            break;
        }
        n = n / 10;

    }

if(count > 0)
    cout<<endl<<"Given no. is not binary.";
else
    cout<<endl<<"Given no. is binary.";

return 0;

}
    