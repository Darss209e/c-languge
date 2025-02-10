#include<stdio.h>
#include<stdlib.h>
int sum =34;
int* functionDangling()
{
    int a,b,sum2;
    a =34;
    b=364;
    sum = a+b;
    return &sum;

}

int main2()
{
    //  case 1: de allocation of a memory block
    int*ptr=(int*)malloc(7*sizeof(int));
    ptr[0]=34;
    ptr[1]=36;
    ptr[2]=64;
    ptr[3]=5;
    free(ptr); // ptr is now a dangling pointer

    // case 2: function returnig local variable address
    int*dangPtr = functionDangling();// ptr is now a dangling pointer

int* danglingptr3;
    // case 3: if a variable goes out of scope 
    {
       int a=12;

       danglingptr3 =&a;

    }
    // here variable a goes out of scope which means danglingptr3 is pointing towards a point which is freed and hence danglingptr3 is now a dangling pointer 



    return 0;
}
