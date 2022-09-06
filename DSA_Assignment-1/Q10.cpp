#include<iostream>
using namespace std;

int main()
{
    /*In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number
of illiterate men and women if the population of the town is
80,000. */

double men,women,lit_men,lit_women,ill_lit_men, lit,Total,ill_lit_women;
Total=80000;
men=(52*80000)/100;
women= Total - men;
lit=(48*Total)/100;
lit_men=(35*Total)/100;
lit_women= lit - lit_men;
ill_lit_women= women - lit_women;
ill_lit_men= men - lit_men;

cout<<endl<<"The total illiterate men in town is ="<<ill_lit_men;
cout<<endl<<"The total illiterate women in town is ="<<ill_lit_women;





    return 0;
}