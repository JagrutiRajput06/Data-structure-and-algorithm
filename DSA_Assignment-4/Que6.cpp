#include<iostream>
using namespace std;

int main()
{
    // Que6: Write a program to calculate average of the integer numbers between 15 to 25.

float Average,Sum=0; 
int n=15; 
 
do 
{ 
    Sum += n;
    n++; 
 
} while (n <= 25); 
 
    Average = Sum / 10; 
    cout << "Average of Integers 15 to 25: " << Average; 
 
  return 0;
        
}