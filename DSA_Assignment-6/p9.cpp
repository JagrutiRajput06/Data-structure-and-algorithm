#include<iostream>
using namespace std;

int main()
{
    /*       1
            2 2
           3 3 3
          4 4 4 4
         5 5 5 5 5 */

         int n=5,i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;

       
}