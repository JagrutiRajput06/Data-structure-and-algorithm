#include<iostream>
using namespace std;

int main()
{
    /*       *
            ***
           *****
          *******
         *********   */

        int i,k=0,sp;


        for(i=1;i<=5;i++)
        {
            for(sp=1;sp<=(5-i);sp++)
            {
                cout<<"  ";
            }
            while(k!=2*i-1)
            {
                cout<<"* ";
                k++;
            }
            k=0;
            cout<<endl;
        }
        cout<<endl;
        return 0;

    

}