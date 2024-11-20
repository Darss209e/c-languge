#include<stdio.h>

int main()
{
    int a;
    printf("which of the subject have you passed\n");
    printf("type 1 for maths , 2 for science , 3 for both math and science\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("you won prize of 1500 rupees\n");
    }
    else if (a==2)
    {
        printf("you won prize of 2000 rupees\n");
    }
    else if (a==3)
    {
        printf("you won prize of 3500 rupees\n");
    }
    
    else 
    {
        printf("sorry!this choice is not given please from given above\n");
    }
    
    return 0;
}
