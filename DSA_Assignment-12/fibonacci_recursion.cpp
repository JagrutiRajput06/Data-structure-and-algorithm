#include<iostream>
using namespace std;
/*write a code for Fibonacci series using recursion*/
void fib(int);
int main()
{
    int n;
    
    cout<<endl<<"Enter no of digit in the series:";
    cin>>n;

    cout<<endl<<"Fibonacci Series"<<endl;

    cout<<endl<<0, 1;

    fib(n-2);
    return 0;

}

void fib(int n)
{
    static int i=0, j=1, t;

    if(n>0)
    {
        t=i+j;
        i=j;
        j=t;

        cout<<endl<<t;
        fib(n-1);
    }
}