#include<iostream>
using namespace std;
class Distance
{
  int feet, inches;
  public:
  Distance()
  {

  }
  Distance(const Distance&s)
  {
    feet=s.feet;
    inches=s.inches;
    cout<<"Copy called\n";
  }
  Distance(int x,int y)
  {
    feet=x;
    inches=y;
  }
 Distance operator()(int a,int b,int c)
 {
    feet=a+c+5;
    inches=a+b+15;
    Distance d={feet,inches};
    return d;
 }
 friend ostream&operator<<(ostream&s,Distance&t)
 {
    s<<t.feet<<" feet , "<<t.inches<<" inches\n";
    return s;
 }
};
int main()
{
    Distance d1={10,20};
    Distance d2=d1(7,15,8);
    cout<<d2;
    return 0;

}