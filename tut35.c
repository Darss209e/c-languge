#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="darshan";
    char s2[]="harry";
    char s3[54];
    // puts(strcat(s1,s2));
    printf("the length of s1 is %d\n",strlen(s1));
    printf("the length of s2 is %d\n",strlen(s2));
    printf("the reversed string s1 is :\n");
    puts(strrev(s1));
    printf("the reversed string s2 is :\n");
    puts(strrev(s2));
    
    s3 = puts(strcat(s1,s2));
    return 0;
}