#include<iostream>
using namespace std;

int main()
{
    // Que2: Write a cpp code to check if entered number is palindrome or not.

    int reverse=0, num, rem,n;

    cout<<endl<<"Enter the number:";
    cin>>num;
    n=num;
    do
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    } while (num!=0);

    cout<<"The reverse no. is:"<<reverse<<endl;

    if(n==reverse)
        cout<<endl<<"The no. is Palindrome.";
    else 
        cout<<endl<<"The no. is not Palindrome.";

    return 0;
    

}