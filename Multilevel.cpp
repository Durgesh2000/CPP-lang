#include<iostream>
using namespace std;
//Class
class Base
{
    public:
        int A,B;  //chara

        Base()
        {
            cout<<"Inside Base Constructor\n"; // spe be
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }
        void fun()
        {
            cout<<"Inside Base fun\n"; //normal be
        }
};
//single Lavel Inheritances
class Derived : public Base // Class Derived extends Base (syntax )
{
    public:
    int x,y;

    Derived()
    {
        cout<<"Inside derived Constructor\n";
    }
    ~Derived()
    {
        cout<<"Inside derived destructor\n";
    }
    void gun ()
    {
        cout<<"Inside gun of Derived\n";
    }

};
class DerivedX : public Derived
{
    public:
    int i,j;

    DerivedX()
    {
        cout<<"Inside derived Constructor\n";
    }
    ~DerivedX()
    {
        cout<<"Inside derived destructor\n";
    }
    void sun ()
    {
        cout<<"Inside gun of Derived\n";
    }
};

int main()
{
   cout<<"size of Base : "<<sizeof(Base)<<"\n";
   cout<<"size of Base : "<<sizeof(Derived)<<"\n";
   cout<<"size of Base : "<<sizeof(DerivedX)<<"\n";
   
   DerivedX dobj;

   dobj.fun();
   dobj.gun();
   dobj.sun();

    return 0;
}
