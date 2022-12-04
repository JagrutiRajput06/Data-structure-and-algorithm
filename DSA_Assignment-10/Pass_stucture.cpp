#include<iostream>
using namespace std;

/*
Enter the data for employee in struct using udf
empno,empnm,basicsalary
da =20% 0f bs
hra =20% of bs
med =1000 rs
pf=25% of bs
loan= 8% of bs;
cal gross sal and netslaray and display salary slip
*/
struct employee
{
    char nm[25];
    int no;
    int bs;
    int gs;
    int ns;

};

typedef struct employee emp;
emp getdata(emp);

int main()
{
    emp e;
    e=getdata(e);
    
    cout<<endl<<"Salary slip of Employee"<<endl;

    cout<<endl<<"Employee name is"<<e.nm;
    cout<<endl<<"Employee number is"<<e.no;
    cout<<endl<<"Basic salary is"<<e.bs;
    cout<<endl<<"Gross salary is"<<e.gs;
    cout<<endl<<"Net salary is"<<e.ns;

    return 0;

}

emp getdata (emp e1)
{
    int da, hra, pf, med, loan;

    cout<<endl<<"Enter name of employee";
    cin>>e1.nm;

    cout<<endl<<"Enter number of employee";
    cin>>e1.no;
    fflush(stdin);

    cout<<endl<<"Enter basic salary";
    cin>>e1.bs;

    da=0.2*(e1.bs);
    hra=0.2*(e1.bs);
    med= 1000;
    pf=0.25*(e1.bs);
    loan=0.08*(e1.bs);

    e1.gs=(e1.bs+da+hra+med);
    e1.ns=(e1.gs-pf-loan);

    return e1;
}