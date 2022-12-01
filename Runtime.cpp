#include<iostream>
using namespace std;

class Base
{

public:                  //Access specifier
    int A,B;

    void fun()           // Function defination
    {
        cout<<"Base fun\n";
    }
    void gun(int i)        //Function defination
    {
        cout<<"Base gun with one integer\n";
    }
    void gun(int i, int j)  //overloaded function defination
    {
        cout<<"Base gun with 2 integer\n";
    }
};

class Derived : public Base
{

   public:
   int X,Y;  //Function defination
   void sun()
   {
    cout<<"Derivred sun\n";
   }
   void fun(int i)
   {
    cout<<"Derived fun\n";
   }


};



int main()
{
  Derived dobj;
  dobj.Base::fun();
  dobj.gun(11);
  dobj.gun(11,21);
  dobj.sun();

    return 0;
}