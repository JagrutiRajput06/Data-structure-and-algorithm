#include<iostream>
using namespace std;

int main()
{
    /* 1
       0  1
       1  0  1
       0  1  0  1
       1  0  1  0  1
       0  1  0  1  0  1  */


    int i,j,n,p,q;
    cout << " Input number of rows: ";
    cin >> n;
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     { 
	 p=1;q=0;
	 }
     else
     { 
	 p=0;q=1;
	 }
      for(j=1;j<=i;j++)
	 if(j%2==0)
	    cout<<p;
	 else
	    cout<<q;
     cout<<endl;
   }
}