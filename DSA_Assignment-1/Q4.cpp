#include<iostream>
using namespace std;

int main()
{
    /* Q4 Temperature of a city in Fahrenheit degrees is input through
    the keyboard. Write a program to convert this temperature
    into Centigrade degrees. */
    
    float fahrenheit_tmp, centi_temp;

    cout<<endl<<"Enter temperature of city in Fahrenheit degrees = ";
    cin>>fahrenheit_tmp;
    
    centi_temp= (fahrenheit_tmp-32)*5/9;
    
    cout<<endl<<"Temperature of city in centigrades = "<<centi_temp;

    return 0;

}