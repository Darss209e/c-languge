#include<stdio.h>
#include"tut54.c"
#define PI 3.140
#define square(r)r*r

int main()
{  s
    float var = PI;
    int r=4;
    int*ptr = functionDangling();
    printf("the value of PI  is  %f\n",var);
    printf("the area of the cicle is %f\n",PI*square(r));
    return 0;
}
