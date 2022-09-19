#include<iostream>
using namespace std;

int main()
{
    /* 1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15
       16 17 18 19 20 21 
       22 23 24 25 26 27 28  */

       int i, j=0, n=7,num=1;
       i=1;

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