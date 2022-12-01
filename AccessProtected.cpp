#include<iostream>
using namespace std;
 class Base
 {
   public:
     int i;
   private:
     int j;
   protected:
      int k;
   public:
       Base()     
       {
        i= 10;
        j= 20;
        k= 30;
       }
 };
 class Derived : public Base
{     
      public:
           void Fun()
       {
        cout<<"Value of public i  of Base:"<<i<<"\n";
       // cout<<"Value of privet j :"<<j<<"\n";
        cout<<"Value of proteted k :"<<k<<"\n";
       }



 };

int main()
{
   Derived dobj;
    dobj.Fun();
   
    return 0;
}