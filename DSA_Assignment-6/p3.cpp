#include<iostream>
using namespace std;

int main()
{
    /* *
       * *
       * * *
       * * * *
       * * * * *  */

    
    int i = 0, j = 0,n=5;
    while (i < n)
    {
 
        while (j <= i) 
        {
            cout << "* ";
            j++;
        }
        j = 0; 
        i++;
        cout << endl;
    }
    return 0;
}
