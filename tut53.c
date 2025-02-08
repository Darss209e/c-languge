#include<stdio.h>


int main()
{
    int a=34;
    int*ptr=&a;
    if (ptr!=NULL)
    {
    printf("the address of a is %d\n",*ptr);
    }
    else
    {
        printf("the pointer is a null pointer and can not be derefrenced");
    }
    
    return 0;
}
