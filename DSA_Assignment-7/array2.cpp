#include<iostream>
using namespace std;

int main()
{
    /* Q2: write a code to find max and min values enter in an array of 10 elements. */
    
    int i, min,max, a[10];

    for(i=0;i<=10;i++)
    {
        cout<<endl<<"Enter the values in array :";
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<=10;i++)
    {
        if(max < a[i])
        max=a[i];
    }
    cout<<endl<<"The Maximum value is"<<max;

    min=a[0];

    for(i=0;i<=10;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    cout<<endl<<"The Minimum value is"<<min;
    
    return 0;
    
}