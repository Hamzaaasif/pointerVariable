#include<iostream>
#include "thing.h"
using namespace std;
int main()
{
  thing t(1,2,3);
  cout<<"            T"<<endl;
  t.display();
  thing A=t;
  cout<<"           A"<<endl;
  A.display();
  A.set(4,9,76);
  thing B;
  B=A;
  cout<<"            B"<<endl;
  B.display();
  t.set(4,5,6);
  B = t;
  cout<<"            T"<<endl;
  t.display();
  cout<<"            B"<<endl;
  B.display();
  cout<<"            A"<<endl;
  A.display();
 system("pause");
};