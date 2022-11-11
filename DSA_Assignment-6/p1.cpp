#include<iostream>
using namespace std;

int main()
{
    /* 1
       1  2
       1  2  3
       1  2  3  4
       1  2  3  4  5  */
    int i,j,n=5;
    i=1;

    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<" "<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}