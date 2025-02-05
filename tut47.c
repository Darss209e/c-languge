#include <stdio.h>
#include <stdlib.h>

int main()
{
    // use of malloc
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    return 0;
}
