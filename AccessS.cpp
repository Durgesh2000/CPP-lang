#include<iostream>
using namespace std;
 class Base
 {
      int x;
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
       void fun()
       {
        cout<<"Value of public i :"<<i<<"\n";
        cout<<"Value of privet j :"<<j<<"\n";
        cout<<"Value of proteted k :"<<k<<"\n";
       }



 };

int main()
{
   Base bobj;
   cout<<"value of public i :"<<bobj.i<<"\n";
   
   bobj.fun();

    return 0;
}