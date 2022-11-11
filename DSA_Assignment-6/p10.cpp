#include<iostream>
using namespace std;

int main()
{
    /* 1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15 */

       int i=1,j=0,num=1,n=5;

       while(i<=n)
       {
        while(j<=i-1)
        {
            cout<<num<<" ";
            num++;
            j++;
        }
        j=0;
        i++;
        cout<<endl;

       }
       return 0;

       
}