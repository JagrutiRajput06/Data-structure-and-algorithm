#include<iostream>
using namespace std;

void findno(int [],int);

int main()
{
    int a[]={3,6,1,5,4},n;

    n = 5;
    
    findno(a,n);   

}
void findno(int a[],int n)
{
    int i,*t,ans;
    
    t=new int[n+1];

    for(i=0;i<=n;i++)
        t[i]=0;

    for(i=0;i<n;i++)
        t[a[i]-1]=1;

    for(i=0;i<=n;i++)
    {
            if(t[i]==0)
            {
                ans=i+1;
                //break;
            }
    }    
    cout<<endl<<"MISSING ELEMENT IS :"<<ans;    
}