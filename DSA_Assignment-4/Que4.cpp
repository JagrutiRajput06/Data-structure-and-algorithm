#include<iostream>
using namespace std;

int main()
{
    // Que4: Write a program to display the number from 1 to 100 inclusive.

    //using while loop

    int num=1,n;

    while (num<=100)
    {
        cout<<num<<" ";
        num=num+1;
    }
    

    //using for loop
    for (n=1; n<=100; n++)
    {
        cout<<n<<" ";
    }
    

    return 0;
}