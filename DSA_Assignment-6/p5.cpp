#include<iostream>
using namespace std;

int main()
{
    /* A
       B B
       C C C
       D D D D
       E E E E E */
    char i,j,n='E';
    i='A';
    while(i<=n)
    {
        j='A';
        while(j<=i)
        {
            cout<<" "<<i;
            j++;

        }
        cout<<endl;
        i++;
    }       
}