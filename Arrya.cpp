#include<iostream>
using namespace std ;
  class Arrya
  {

    public:
      int isize;
      int *Arr;
      Arrya(int iLength)
       {
        isize = iLength;
        Arr = new int[isize];
       }
       ~Arrya()
       {
        delete []Arr;
       }
       void Accept()
       {
        cout<<"Enter the value\n";
        int i = 0;

        for ( i = 0; i < isize; i++)
        {
            cin>>Arr[i];
        }
        
       }
  };

int main()
{
    Arrya obj1(4);
    Arrya obj2(6);
            
    return 0;
}