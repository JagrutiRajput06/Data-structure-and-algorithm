#include <iostream>
using namespace std;


int sum (int);
int main()
{
    int e,s;
    cout<<endl<<"Enter the ending range :";
    cin>>e;
    s=sum(e);
    cout<<endl<<"Sum of even numbers is :"<<s;
    
    
    return 0;

}

int sum(int n)
{
    static int t=0;

    if (n==2)
      return n;

    else
        {
            if(n%2==0)
                t=n+sum(n-1);
            else
                t=sum(n-1);

        }  

     return t;   
}