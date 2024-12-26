#include <stdio.h>
int b=34;
int func1(int b1)
{
     static int myvar=98;
     printf("The value of myvar is %d\n",myvar);
     myvar++;
    // printf("the value of b inside func1 is %d\n",b);
    // printf("the address of b in func1 is %d\n",&b);
    return b1 + myvar;
}
int main()
{

    int b = 344;
    // printf("the address  of b at func1 is %d\n", &b);
    int val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
    int *ptr = &val;

    // printf("the value of func1 is %d", val);
    return 0;
}