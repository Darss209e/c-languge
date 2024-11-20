#include <stdio.h>
int factorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return (a * factorial(a - 1));
    }
}

int main()
{
    int num;
    printf("enter your number you want factorial of\n");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, factorial(num));
    return 0;
}
