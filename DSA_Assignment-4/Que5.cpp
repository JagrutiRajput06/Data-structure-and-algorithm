#include<iostream>
using namespace std;

int main()
{
    // Que5: Write a program to display all the letters of the latin alphabet.

    char ch , charc;

    for(ch='A';ch<='Z';++ch)
    
        cout<<ch<<" ";

    for(charc='a';charc<='z';++charc)

        cout<<charc<<" ";
    return 0;
}