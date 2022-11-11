#include<iostream>
using namespace std;

int main()
{
    /* Q1: write a code to store elements of a array in another array 
    but in reverse order i.e a[0] =a[n-1].  */
    int a[10],r[10],i,j;
    j=9;
    for(i=0;i<10;i++)
    {
        cout<<endl<<"Enter elements:";
        cin>>a[i];

        r[j--]=a[i];

    }
    for(i=0;i<10;i++)
    {
        cout<<endl<<a[i]<<"     "<<r[i];
    }
    return 0;

}
