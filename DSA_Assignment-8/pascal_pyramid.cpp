#include<iostream>
using namespace std;

int main()
{
    int r,i,j,k;

    cout<<"Enter the no. of rows:";
    cin>>r;


    for(i=0;i<r;i++)
    {
        int val=1;
        for(j=1;j<(r-i);j++)
        {
            cout<<"   ";
        }

        for(k=0;k<=i;k++)
        {
            cout<<"      "<<val;
            val=val*(i-k)/(k+1);
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}