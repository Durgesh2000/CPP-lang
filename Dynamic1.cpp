#include<iostream>
using namespace std;

int main()
{
   int *p = NULL;

   p = new int[5];
   // p = (int *) malloc(5* sizeof(int));

   //use the memory

   delete []p;
   //free (p);




    return 0;
}