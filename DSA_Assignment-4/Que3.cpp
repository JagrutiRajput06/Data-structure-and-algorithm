#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    // Que3:	Write a cpp code to check a number is Armstrong or not.

    int n =0, num, origin_num, rem, result =0,power;

    cout<<endl<<"Enter a number:";
    cin>>num;

    origin_num=num;
    while (origin_num!=0)
    {
        origin_num/=10;
        ++n;
    }
    origin_num=num;
    while (origin_num!=0)
    {
        rem=origin_num%10;
        power=round(pow(rem,n));
        result+=power;
        origin_num/=10;
    }

    if(result==num)
        cout<<endl<<num<<"The no. is armstrong.";
    else
        cout<<endl<<num<<"The no. is not armstrong";
    
    return 0;
    
}