#include<iostream>
using namespace std;

class Demo
{

public:               // access specifier
   int i ;           //  instance variable
   int j ;             //  instance variable
   static int k;       // class variable
   static int l;      // class variable

    Demo()               // default constructor
    {
        i = 0;
        j = 0;
    }
    Demo(int a ,int b)
    {
        i = a;
        j = b;
    }
};

int Demo::k = 0;
int Demo::l = 0;
int main()
{
    cout<<"value of K :"<<Demo::k<<"\n";
    cout<<"value of l :"<<Demo::l<<"\n";
   Demo obj1(10,11);
   Demo obj2(20,21);

    cout<<"value of i in obj1 :"<<obj1.i<<"\n";
    cout<<"value of i in obj2 :"<<obj2.i<<"\n";

     cout<<"value of j in obj1 :"<<obj1.j<<"\n";
    cout<<"value of j in obj2 :"<<obj2.j<<"\n";


   cout<<sizeof(obj1);

    return 0;
}