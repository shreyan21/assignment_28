# include<iostream>
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
void setData(int x,int y)
{
   real=x;
   img=y;	
}	
int getReal()
{
	return real;
}
int getImg()
{
	return img;
}
friend ostream&operator<<(ostream&,Complex&);
friend istream&operator>>(istream&,Complex&);
};
ostream& operator<<(ostream&s,Complex&t)
{
	s<<t.real<<" + "<<t.img<<"i"<<endl;
	return s;
}
istream& operator>>(istream&s,Complex&t)
{
	cout<<"Real part : ";
	cin>>t.real;
	cout<<"Imaginary part : ";
	cin>>t.img;
	return s;
}
int main()
{
	Complex c1,c2;
	cout<<"Enter first complex number : \n";
	cin>>c1;
	cout<<"Enter second complex number : \n";
	cin>>c2;
	cout<<endl<<c1<<c2;
	cin.ignore();
	getchar();
	return 0;
}
