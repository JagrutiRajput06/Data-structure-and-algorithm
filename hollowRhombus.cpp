#include <iostream>
using namespace std;

int main()
{
    int i,j,num;

    cout<<endl<<"Enter the Number:";
    cin>>num;
    for (i = 0; i < num; i++)
    {
        for(j=0;j<num-i;j++)
            cout<<" ";
        for(j=0;j<num;j++)
        {
            if(i==0 || i==num-1||j==0||j==num-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}