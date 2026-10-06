#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
protected:
    int roll;
    char name[25];

public:
    void getdata()
    {
        cout<<"\n----------------------";
        cout<<"\n Enter roll no.    :";
        cin>>roll;
        cout<<"\n Enter student name    :";
        cin>>name;
    }

    void putdata()
    {
        cout<<"\n ---------------------";
        cout<<"\n **** Student Marklist & Report ****";
        cout<<"\n ---------------------";
        cout<<"\n Roll no.  :"<<roll;
        cout<<"\n Student Name  :"<<name<<endl;
    }
};

class StudentExam : virtual public Student
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;    

    void accept_marks()
    {
        cout<<"\n Enter Marks for Subject 1:";
        cin>>sub1;
        cout<<"\n Enter Marks for Subject 2:";
        cin>>sub2;
        cout<<"\n Enter Marks for Subject 3:";
        cin>>sub3;
        cout<<"\n Enter Marks for Subject 4:";
        cin>>sub4;
        cout<<"\n Enter Marks for Subject 5:";
        cin>>sub5;
        cout<<"\n Enter Marks for Subject 6:";
        cin>>sub6;
    }

    void display_marks()
    {
        cout<<"\n Marks of Subject 1:"<<sub1;
        cout<<"\n Marks of Subject 2:"<<sub2;
        cout<<"\n Marks of Subject 3:"<<sub3;
        cout<<"\n Marks of Subject 4:"<<sub4;
        cout<<"\n Marks of Subject 5:"<<sub5;
        cout<<"\n Marks of Subject 6:"<<sub6;
    }
};

class StudentSports : virtual public Student
{
protected:
    int sports_score;

public:
    void accept_sports()
    {
        cout<<"\n Enter Sports Score/Points:";
        cin>>sports_score;
    }

    void display_sports()
    {
        cout<<"\n Sports Score      :"<<sports_score;
    }
};

class StudentResult : public StudentExam, public StudentSports
{
public:
    void calculate()
    {
        float per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
        
        putdata();
        display_marks();
        display_sports();
        
        cout<<"\n\n Total Percentage  :"<<per<<"%";
        cout<<"\n ---------------------------\n";
    }
};

int main()
{
    StudentResult str;
    int cnt, i;
    cout<<"\n Enter no. of Student You Want?:";
    cin>>cnt;
    
    for(i = 0; i < cnt; i++)
    {
        str.getdata();
        str.accept_marks();
        str.accept_sports();
        str.calculate();
    }
    return 0;
}
