#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
 int s,l,b;
 float r,bs,ht;
 cout<<"Enter side of square:";
 cin>>s;
 cout<<"Enter length and breath of rectangle:"; 
 cin>>l>>b;
 cout<<"Enter the radius of circle:";
 cin>>r;
 cout<<"Enter base and height of rectangle:";
 cin>>bs>>ht;
 cout<<"area of square is"<<area(s);
 cout<<"/n area of rectangle is"<<area(l,b);
 cout<<"/n area of circle is"<<area(r);
 cout<<"/n area of traingle is"<<area(bs,ht);
 }
 int area(int s)
 {
 return(s*s);
 }
 int area(int l,int b)
 {
 return(l*b);
 }
 float area(float r)
 { 
 return(3.14*r*r);
 }
 float area(float bs,float ht)
 {
 return(0.5*bs*ht);
 }
