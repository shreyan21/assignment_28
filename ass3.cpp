#include<iostream>
using namespace std;
class array
{
  int*a;
  int size;
  public:
  array()
  {
    a=NULL;
    size=0;
  }
  array(const array&s)
  {
      size=s.size;
      a=(int*)malloc(sizeof(int)*size);
      for(int i=0;i<size;i++)
      {
        a[i]=s.a[i];
      }

  }
  void initialize()
  {
    cout<<"Enter elements of array : ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
  }
  int operator[](int index)
  {
    if(index>=size||index<0)
    {
        cout<<"Array index out of bound exception\n";
        exit(0);
    }
    return a[index];
    
  }
  array operator=(const array&s)
  {  
    size=s.size;
    a=(int*)realloc(a,s.size);
    for(int i=0;i<size;i++)
    {
        a[i]=s.a[i];
    }
    return *this;

  }
  void setSize(int size)
  {
    this->size=size;
    this->a=(int*)malloc(sizeof(int)*size);
  }
  ~array()
  {
    free(a);
  }

};
int main()
{
   array a1;
   int size;
   cout<<"Enter size of array : ";
   cin>>size;
   a1.setSize(size);
   a1.initialize();
   cout<<a1[3];
   return 0;

}