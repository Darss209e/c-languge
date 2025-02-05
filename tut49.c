#include <stdio.h>

// int myvar;
int myfunc(int a, int b)
{
    static int myvar;
    myvar++;
    printf("the myvar is %d\n", myvar);
    // myvar = a + b;
    return myvar;
}


int main()
{
    // declaration = telling the compiler about the variable(no space reserved)
    // definition = declaration + space reserved
    register int myvar = myfunc(3, 5);
     myvar = myfunc(3, 5);
     myvar = myfunc(3, 5);
     myvar = myfunc(3, 5);
    // printf("the myvar is %d\n", myvar);
    return 0;
}
