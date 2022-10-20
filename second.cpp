#include<iostream>
using namespace std;
class Complex
{
int real,img;
public:
Complex()
{
	real=0;
	img=0;
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
	Complex c1;
	c1.setData(4,5);
	cout<<c1.getReal()<<" + "<<c1.getImg()<<"i"<<endl;
	getchar();
	return 0;
}
