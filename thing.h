#include<iostream>
using namespace std;
class thing
{
public:
thing()  //Null comstructor
{
 this->x=new int(0);
 this->y=0;
 this->z=0;
}
thing(int X,int y,int z )
{
 x = new int(X);
*x=X;
 this->y=y;
 this->z=z;
}
thing(thing& clone)
{
 this->x = clone.x;
 clone.x=new int;
 this->y=clone.y;
 this->z=clone.z;
}
void set(int X,int y,int z)
{
 this->x =new int(X);
 this->y=y;
 this->z=z;
}
void operator =(thing& t)
{
  this->x=new int;
  x = t.x;
  this->y=t.y;
  this->z=t.z;
}

void display()
{
  int a=*x;
  cout<<"X: " << a << endl << "Y: "<<this->y<<endl<<"Z: "<<this->z<<endl;
}
  
private:
int *x;
int y,z;
};