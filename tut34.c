#include<stdio.h>

void printstr(char str[])
{
  int i=0;
while (str[i]!='\0')
{
    printf("%c",str[i]);
    i++;
}


}


int main()
{
    // char str[] = {'D','a','r','s','h','a','n','\0'};
    // char str[8]="Darshan";
    char str[34];
    fgets(str,34,stdin);
    printf("using custom function\n");
    printstr(str);
    printf("using printf %s",str);
    printf("using puts: \n");
    puts(str);

    return 0;
}