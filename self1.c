#include <stdio.h>

int main()

{
    char a, b, c, d;
    printf("enter name\n", &a);
    scanf("%c", &a);
    printf("enter father name\n", &b);
    scanf("%c", &b);
    printf("enter roll no\n", &c);
    scanf("%c", &c);
    printf("enter date of birth\n", &d);
    scanf("%c", &d);
    printf("your ID is %c %c %c %c",a,b, c,d);
    return 0;
}
