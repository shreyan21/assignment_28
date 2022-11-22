#include<iostream>
using namespace std;
class Integer
{
  int a;
  public:
  Integer()
  {}
  Integer(int a)
  {
    this->a=a;
  }
  Integer operator=(const Integer&s)
  {
    a=s.a;
    return *this;
  }
  Integer operator!()
  {
     Integer i;
     i.a=!a;
     return i;
  }
  int get()
  {
    return a;
  }
};
int main()
{
    Integer i1(2),i2(0);
    i1=!i2;
    cout<<i1.get()<<" "<<i2.get()<<endl;
    return 0;
}