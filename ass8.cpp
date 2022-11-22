#include<iostream>
using namespace std;
class Coordinate
{
  int x,y,z;
  public:
  Coordinate()  
  {
    x=0,y=0,z=0;
  }
  void set(int x,int y,int z)
  {
    this->x=x;
    this->y=y;
    this->z=z;
  }
  void display()
  {
    cout<<"x = "<<x<<" , y = "<<y<<" , z = "<<z<<endl;
  }
  Coordinate operator,(Coordinate &s)  
  {
    return s;
  }

};
int main()
{
    Coordinate c1,c2,c3;
    c1.set(4,3,9);
    c2.set(5,3,2);
    c3=(c1,c2);
    c3.display();
    return 0;

}