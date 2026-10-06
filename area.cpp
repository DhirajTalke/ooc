#include<iostream>
using namespace std;

class Rectangle
{
 private:
    float length;
    float width;
 public:
    Rectangle(float l,float w)
    {
      length=l;
      width=w;
      cout<<"Constructor called"<<endl;
    }
   
    float area()
    {
     return length*width;
    }
    float perimeter()
    {
     return 2*(length+width);
    }
    
    ~Rectangle()
    {
      cout<<"Destructorcalled"<<endl;
    }
  }; 

  int main()
  {
    Rectangle r(10,15);
   
    cout<<"Area ="<< r.area()<<endl;
    cout<<"perimeter ="<<r.perimeter()<<endl;

    return 0;
   }
