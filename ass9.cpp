#include<iostream>
using namespace std;
class Integer
{
int x;
public:
Integer()
{}
Integer(int x)
{
    this->x=x;
}
operator int()
{
    return x;
}
};
int main()
{
    Integer i1=34;
    int x;
    x=(int)i1;
    cout<<x<<endl;
    return 0;

}