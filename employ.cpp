#include<iostream>
using namespace std;
class Student{
 private:
  int roll_no;
  string name;
  float marks;
 public:
  void input(){
  cout<<"Enter the roll_no/n;
  cin>> roll_no;
  cout<<"Enter the name/n;
  cin>>name;
  cout<<"Enter the marks/n;
  cin>>marks;
  }
  void display(){
  cout<<"roll_no of student:/n"<<roll_no<<endl;
  cout<<"name of student:/n"<<name<<endl;
  cout<<"marks of student:/n"<<marks<<endl;
  }
 };
 int main(){
 Student s;
 s.input();
 s.display();
 return 0;
}
