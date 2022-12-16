#include <iostream>
using namespace std;

/*Write cpp code for create a dynamic array and find minimum and maximum value entered.*/
int main()
{
    int a[10] ,i, min, max;
   
   
    for (i=0; i<10 ;i++)
    {
       cout<<endl<<"Enter the elements in array  " ;
       cin>>a[i];
  
    }
    min=a[0];

    for (i=0; i<10 ;i++)

    {
       if (min>a[i])
       min=a[i];

    }

    cout<<endl<<"The minimum value is " <<min;

     max=a[0];

    for (i=0; i<10 ;i++)

    {
       if (max<a[i])
       max=a[i];

    }
    cout<<endl<<"The maximum value is " <<max;   
       
    return 0;

}