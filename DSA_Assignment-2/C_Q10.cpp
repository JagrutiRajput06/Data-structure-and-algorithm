#include<iostream>
using namespace std;

int main()
{
    /* Q10:Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.   */

    float x1, y1, x2, y2, x3, y3, m, n;  
  
    cout<<endl<<"Enter points (x1, y1)";  
    cin>>x1>>y1;  
  
    cout<<endl<<"Enter points (x2, y2)";  
    cin>>x2>>y2;  
  
    cout<<endl<<"Enter points (x3, y3)";  
    cin>>x3>>y3;  
  
    m = (y2 - y1) / (x2 - x1);  
    n = (y3 - y2) / (x3 - x2);  
  
    if( m == n)  
    {  
        cout<<endl<<"All 3 points lie on the same line";  
    }  
    else  
    {  
        cout<<endl<<"All 3 points do not lie on the same line";  
  
    }  
  
    return 0;  
}