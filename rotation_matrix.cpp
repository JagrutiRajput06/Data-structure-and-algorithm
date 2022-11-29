#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int m[3][3],i,j,r;

    for(i=0;i<3;i++)
    {
        cout<<endl<<"Enter"<<i+1<<" row data :"<<endl;
        for(j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
    }


    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
            int t;
            t=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=t;

        }
    }

    
    for(i=0;i<3;i++)
    {
        r=2;
        for(j=0;j<r;j++)
        {
            int t;
            t=m[i][j];
            m[i][j]=m[i][r];
            m[i][r]=t;
            r--;

        }
    }

    cout<<endl<<"Rotational Matrix :"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<setw(3)<<m[i][j];

        }
        cout<<endl;
    }
}