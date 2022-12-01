#include<stdio.h>
#include<stdlib.h>

int main()
{
   int Arr[5];  //static memory Allocation

   int *p = NULL;

   p = (int *)malloc(sizeof(int)*5);

   // use the Memory

   free(p);

   //code


    return 0;  //memory of Arr gets deallocate at this point
}

// Prototype of functions

//                  void * malloc(int size);