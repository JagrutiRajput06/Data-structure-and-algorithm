#include<iostream>
using namespace std;

int main()
{
    /* Q3: write a code to count no of positive negative and zro elements in array of 10. */

    int i, P=0, N=0, Z=0, a[10];

    for(i=0;i<10;i++)
    {
        cout<<endl<<"Enter values in array :";
        cin>>a[i];
    } 

    for(i=0;i<10;i++)
    {
        if(a[i]>0)
            P++;

        else if(a[i]<0)
            N++;

        else
            Z++;

    }

    cout<<endl<<"No. of Positive elements in array :"<<P;
    cout<<endl<<"No. of Negative elements in array :"<<N;
    cout<<endl<<"No. of Zero elements in array :"<<Z;

    return 0;

}