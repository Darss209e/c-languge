#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("employee %d:enter the no of character in your employee ID\n", i + 1);
        scanf("%d", &chars);
        getchar();
        printf("enter thr value of a\n");
        scanf("%c", &a);
        getchar();
        printf("enter thr value of b\n");
        scanf("%c", &b);
        getchar();
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("enter your employee ID\n");
        scanf("%s", ptr);
        printf("your employee ID is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}
