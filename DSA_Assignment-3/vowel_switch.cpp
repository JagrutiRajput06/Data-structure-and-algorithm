#include<iostream>
using namespace std;

int main()
{
    //write a code in cpp using switch to check entered character to be a vowel or a consonent.

char vowel;

cout<<endl<<"Enter the character:";
cin>>vowel;

switch (vowel)
{
    case 'a':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'e':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'i':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'o':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'u':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'A':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'E':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'I':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'O':
        cout<<endl<<vowel<<" character is vowel";
        break;
    case 'U':
        cout<<endl<<vowel<<" character is vowel";
    break;
    default:
        cout<<endl<<vowel<<" character is consonent";
        break;
}



} 

