#include<iostream>
using namespace std;

int main()
{
    /* 1
       2  2
       3  3  3
       4  4  4  4
       5  5  5  5  5 */
    
    int i,j,n=5;
    i=1;

    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<" "<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
       
}