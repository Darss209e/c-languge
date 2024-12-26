#include<stdio.h>
#include<string.h>

void parser(char *string)
{
   int in=0; //the variable to track weather we are inside the tag
   int index=0;
   for (int i = 0; i < strlen(string); i++)
   {
    if (string[i]=='<')      
    {
        in =1;
        continue;
    }
    else if (string[i]=='>')
    {
        in=0;
        continue;
    }
    if (in==0)
    {
        string[index]=string[i];
        index++;
    }
    
    
    
   }
   string[index]='\0';
   //remove the trailing spaces from begining
   while (string[0]==' ')
   {
    //shift the string to the left
    for ( int i = 0; i < strlen(string); i++)
    {
        string[i]=string[i+1];
    }
    
   }
   //remove the trailing spaces from ending
   while (string[strlen(string-1)]==' ')
   {
    string[strlen(string-1)]='\0';
   }
   

}

int main()
{
     char string[]= "<h1>    this is heading     <h1>";
     parser(string);
     printf("the parsed string is ~~%s~~",string);
    return 0;
}