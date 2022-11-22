#include<iostream>
using namespace std;
class Complex
{
int real,img;
public:
Complex operator=(Complex&s)
{
    real=s.real;
    img=s.img;
    return *this;
}
void setData(int real,int img)
{
    this->real=real;
    this->img=img;
}
int getReal()
{
    return real;
}
int getImg()
{
    return img;
}


};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2=c1;
    cout<<c2.getReal()<<" + "<<c2.getImg()<<"i"<<endl;
    return 0;
}