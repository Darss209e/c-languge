#include <stdio.h>
int sum(int a, int b);

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int takenumber()
{
    int i;
    printf("enter a number\n");
    scanf("%d", &i);
    return i;
}

void printmessage()
{

  printf("hello this program is without argument and without return value\n");


}

int main()
{
    // int a, b, c;
    // a = 9;
    // b = 87;
    c = sum(a,b);
    // printstar(9);
    // takenumber();
    //   printmessage();
    // printf("the number entered is %d\n",c);
    return 0;
}

int sum(int a, int b)
{

    return a + b;
}
