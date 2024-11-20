#include<stdio.h>

int main()
{
    int num,index=0;
    printf("enter your roll num \n");
    scanf("%d",&num);

    do
    {
        printf("roll number of students behind are %d\n",index);
        index=index+1;
    } while (index<num);
    
    return 0;
}
