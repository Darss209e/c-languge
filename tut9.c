#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
    const float b = 7.333;
    // PI = 7.33;cannot do this since PI is a constant
    printf("tab character \t\t my backslash \a %f",PI);
    // b = 7.22; cannot do this since b is a constant
    // printf("helo world\n");
    // printf("the value of a is %d and the value of b is %8.4f\n", a, b);
    // printf(" %10.4f\n", b);
    // printf(" %10.4f this", b);
    // %c=character
    // %d=integer
    // %f=float( for decimal)
    // %l=long
    // %lf=double
    // %LF=long double
    return 0;
}
