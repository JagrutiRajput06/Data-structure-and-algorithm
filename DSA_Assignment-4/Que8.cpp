#include<iostream>
using namespace std;

int main()
{
    /*Que10: Write a program to the sum of : 1^2+2^2+...+N^2     */
    int N,sum=0;

    cout<<endl<<"Enter the Number (positive integer):";
    cin>>N;

    sum=(N*(N+1)*(2*N+1))/6;

    cout<<endl<<"The sum of the series for "<<N<<" is= "<<sum;

    return 0;

    


}