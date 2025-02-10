#include<stdio.h>
#include<stdlib.h>
int ispalindrome(int num)  
{

    return 1;
}

int main()
{
    int number;
    printf("Enter a number to check whether it ia palindrome or not\n");
    scanf("%d",&number);

    if (ispalindrome(number))
    {
        printf("the given number is a palindrome");
    }
    else
    {
        printf("the given number is not a palindrome");
    }
    
    return 0;
}
