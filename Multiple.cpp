#include<iostream>
using namespace std;
 class Base1
 {
     public :
     int A;
    Base1()
    {
        cout<<"base1 Constructor\n";
    }
    ~Base1()
    {
        cout<<"base1 Destructor\n";
    }

    void fun()
    {
        
    }

 };
 class Base2
 {
    public :
    int I,J,K;
   Base2()
    {
        cout<<"base2 Constructor\n";
    }
    ~Base2()
    {
        cout<<"base2 Destructor\n";
    }
    void gun()
    {
        cout<<"Derived gun\n";
    }
 };
 //Not Allowed in Java
 class Derived : public Base2,Base1
 {
      public :
      int X,Y;
    Derived()
    {
        cout<<"Derived Constructor\n";
    }
    ~Derived()
    {
        cout<<"Derived Destructor\n";
    }
    void sun()
    {
        cout<<"Derived sun\n";
    }
 };

int main()
{

   Derived dobj;

   dobj.fun(); // Base1

    return 0;
}