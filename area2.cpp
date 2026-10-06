#include<iostream>
using namespace std;

class Rectangle{
  float l,w;
public;
    Rectangle(float a,float b):l(a),w(b){}
    float area(){return l*w;}
    float perimeter(){return 2*(l+w);}
 };
int main(){
 Rectangle r(10,15);
cout<<"Area="<<r.area()<<endl;
cout<<"Perimeter="<<r.perimeter()<<endl;
} 


