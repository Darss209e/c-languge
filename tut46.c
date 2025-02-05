#include<stdio.h>
typedef   struct driver
{
    char name[50];
    char DLno[50];
    char route[50];
    int kms;
}dr;

int main()
{
    dr d1,d2,d3;

    printf("enter details of driver no 1\n");
    printf("enter name\n",d1);
    scanf("%s",&d1.name);

    printf("enter driving licence number\n",d1);
    scanf("%s",&d1.DLno); 

    printf("enter route\n",d1);
    scanf("%s",&d1.route);

    printf("enter number of kilometer travelled\n",d1);
    scanf("%d",&d1.kms);



    printf("enter details of driver no 2\n");
    printf("enter name\n",d2);
    scanf("%s",&d2.name);

    printf("enter driving licence number\n",d2);
    scanf("%s",&d2.DLno); 

    printf("enter route\n",d2);
    scanf("%s",&d2.route);

    printf("enter number of kilometer travelled\n",d2);
    scanf("%d",&d2.kms);




    printf("enter details of driver no 3\n");
    printf("enter name\n",d3);
    scanf("%s",&d3.name);

    printf("enter driving licence number\n",d3);
    scanf("%s",&d3.DLno); 

    printf("enter route\n",d3);
    scanf("%s",&d3.route);

    printf("enter number of kilometer travelled\n",d3);
    scanf("%d",&d3.kms);




    return 0;
}


