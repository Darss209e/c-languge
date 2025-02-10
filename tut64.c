#include<stdio.h>

int main()
{
    FILE*ptr=NULL;
    char string[64]="this content was produced by tut64.c";
    // ****Reading a File****  
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("the content of this file has %s\n",string);


    //***writting of a File***
    ptr = fopen("myfile.txt","a");
    fprintf(ptr,"%s\n",string);
    return 0;
}
