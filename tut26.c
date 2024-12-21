#include<stdio.h>

int main()
{
    printf("lets learn about pointers\n ");
    int a=76; 
    int* ptra = &a;
    int*ptr2= NULL;
    printf("the address of pointer a is %p\n",&ptra);
    printf("the adress of a is %p\n",&a);
    printf("the adress of a is %p\n",ptra);
    printf("the adress of some garbage is %p\n",ptr2);
    printf("the value of a is %d\n",*ptra);
    printf("the value of a is %d\n",a);
    return 0;
}
