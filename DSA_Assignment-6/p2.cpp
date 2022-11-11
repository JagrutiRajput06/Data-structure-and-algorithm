#include<iostream>
using namespace std;

int main()
{
    /* A
       A B
       A B C
       A B C D
       A B C D E  */
    char i,j,n='E';
    i='A';
    while(i<=n)
    {
        j='A';
        while(j<=i)
        {
            cout<<" "<<j;
            j++;

        }
        cout<<endl;
        i++;
    }       
}