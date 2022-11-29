/* How do you check if two strings are a rotation of each other? */

#include<iostream>
#include<string>
using namespace std;

bool chk(string ,string);
int main()
{
    string a,b;

    cout<<endl<<"Enter String 1 :";
    getline(cin,a);

    cout<<endl<<"Enter String 2 :";
    getline(cin,b);

    if(chk(a,b))
        cout<<endl<<b<<"  is rotation of "<<a;
    else
        cout<<endl<<b<<"  isn't the rotation of "<<a;

    return 0;
}
bool chk( string s1, string s2)
{
    int i,j,f;

    if(s1.length() != s2.length())
            return false;
    
    string t =s1+s2;

    int tl =t.length();
    int s2l = s2.length();

    for(i=0;i<tl-s2l;i++)
    {
            f=1;
            for(j=0;j<s2l-1;j++)
            {
                if(s2[j] != t[i+j])
                {
                    f=0;
                    break;
                }
            }
        if(f==1)
            return true;       
    }
    return false;   
}