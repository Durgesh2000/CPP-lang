#include<iostream>
using namespace std;

class Base
{
   public:
       int A,B;
       void fun() { cout<<"Base fun\n";}
      virtual   void gun() { cout<<"Base gun\n";}
      virtual  void sun() { cout<<"Base sun\n";}

};
class Derived : public Base
{
  public:
       int X,Y;
       void gun()  { cout<<"Derived gun\n"; }
       void run()  { cout<<"Derived run\n"; }
      virtual void mun()  { cout<<"Derived mun\n"; }

};


int main()
{

   //cout<<"Size of base Class :"<<sizeof(Base)<<"\n";
   //cout<<"Size of derived class :"<<sizeof(Derived)<<"\n";
   Base *bp = NULL;
   Derived dobj;
   bp = &dobj;  //upcasting

    bp->fun();
    bp->gun();
    bp->sun();

    return 0;
}