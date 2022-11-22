#include<iostream>
using namespace std;
class Marks
{
int marks;
public:
Marks(int x):marks(x)
{}
void display()
{
    cout<<"Marks : "<<marks<<endl;
}
Marks* operator->()
{
   return this;
}
};
int main()
{
   Marks s=78;
   s->display();
   return 0;
   
}