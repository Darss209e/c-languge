#include<stdio.h>

int main()
{
    int marks,height;
    printf("enter your marks obtained in exam\n");
    scanf("%d",&marks);
    printf("enter your height for physic test in ft\n");
    scanf("%d",&height);
    switch (marks)
    {
    case 75:
        printf("congrats your marks are 75 and you have cleared exam\n");
        
        switch (height)
        {
        case 5:
         printf("your height matches the required congrats!! you passed");
            break;
        
        default:
            break;
        }
         break;
    








    default:
    printf("better luck next time");
        break;
    }
    return 0;
}
