#include<stdio.h>
#include<string.h>
int main()
{
    
char s1[100];
char s2[40];
char s3[]="is friend of ";
printf("enter you first name\n");
fgets(s1,100,stdin);
printf("enter you second name\n");
fgets(s2,40,stdin);
// printf("your ans is\n");

puts(strcat(strcat(s1,s3),s2));
    return 0;
}