#include <iostream>

using namespace std;
class complex
{
  public:
  int real;
  int img;
  complex()
  {
        real = img = 0;    
  }
  complex(int r, int i)
  {
      real=r;
      img=i;
  }
  int getreal()
  {
      return real;
  }
   int getimg()
  {
      return img;
  }
  complex operator+(complex c2)
    {
        complex c3;
        c3.real=real+c2.real;
        c3.img=img+c2.img;
        return c3;
    }
    complex operator-(complex c1)
    {
        complex c3;
        c3.real=real-c1.real;
        c3.img=img-c1.img;
        return c3;
    }  

    int display()
    {
        cout<<real<<"+"<<img<<"i";
        return 0;
    }
};

int main()
{
    complex c1(2,6),c2(8,5),c3;
    c3=c1+c2;
    c3.display();
    cout<<endl;
    c3=c1-c2;
    c3.display();
    return 0;
}

