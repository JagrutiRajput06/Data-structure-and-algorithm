#include<iostream>
#include<string.h>
using namespace std;

struct student
{
    /*write a code for following create struct student for 15 student with its name,rno, 
    marks of 3 subject,tot per and class with following condition per>=70 dist, per between
    60-70 first than 60-50 second ,than 50-40 pass ,below 40 fail*/

    char name[25];
    int rno;
    char cls[10];
    int marks[4];
    int total;
    float per;

};

typedef struct student stud;

int main()
{
    stud s[16];
    int i, j;

    
    for (i=1; i<16; i++)
    { 
        s[i].total=0;
        fflush(stdin);
        cout<<endl<<"Enter roll no of student "<<i<<" : ";
        cin>>s[i].rno;
        fflush(stdin);

      cout<<endl<<"Enter name of student "<<i<<"  :" ;
        gets(s[i].name);



    for(j=1; j<4; j++)
    {
        cout<<endl<<"Enter the marks in subject "<<j<<" : ";
        cin>>(s[i].marks[j]);
        fflush(stdin);
        s[i].total = s[i].total + s[i].marks[j];
       
    }
     

      s[i].per = s[i].total/3.0;
      if (s[i].per>=70)
        strcpy(s[i].cls,"dist");
      else if (s[i].per>=60)
          strcpy(s[i].cls, "first");
      else if (s[i].per>=50)
           strcpy (s[i].cls, "second");
      else if (s[i].per>=40)
             strcpy (s[i].cls, "pass");
      else
           strcpy (s[i].cls, "fail");             


      
    
    

     cout<<endl;

      
    }

    

    cout<<endl<<endl<<"RESULT OF STUDENT"<<endl;


    for(i=1; i<16; i++)
    {
        cout<<"Name of student "<<i<<" is : " <<s[i].name<<endl;
        cout<<"Roll no of student "<<i<<" is : " <<s[i].rno<<endl;
        for(j=1; j<4; j++)

        {
            cout<<"Marks of subject "<<j<<" is :" <<(s[i].marks[j])<<endl;

        }

        cout<<"Total percentage of student "<<i<<" is :" <<s[i].per<<endl;

     
       cout<<endl<<"Class of student "<<i<<" is : "<<s[i].cls<<endl;
       
             

    }    

    return 0;
    
}

