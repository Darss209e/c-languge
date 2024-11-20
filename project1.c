#include<stdio.h>

int main()
{
    char maths,science;
    printf("enter name of passed subject\n");
    scanf("%C",&maths);
    scanf("%C",&science);
    
    
   
    if (maths)
    {
       printf("you won the prize of rupees 1500");

    }
    if (science)
    {
        printf("you won the prize of rupees 1700");
    }
else if (maths,science)
{
    printf("you won the prize of rupees 35000");
}

 
    
    

    return 0;
}
