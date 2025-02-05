// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     // use of malloc
//     int *ptr;
//     int n;
//     printf("enter the size of the array you want create\n");
//     scanf("%d",&n);
//     ptr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value of no %d to this array\n",i);
//         scanf("%d",&ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf(" the value at %d in array is %d\n",i,ptr[i]);
//         // scanf("%d",&ptr[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // use of calloc
    int *ptr;
    int n;
    printf("enter the size of the array you want create\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of no %d to this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf(" the value at %d in array is %d\n", i, ptr[i]);
        // scanf("%d",&ptr[i]);
    }

    // use of realloc
    
    printf("enter the size of the new  array you want create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of no %d to this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf(" the value at %d in array is %d\n", i, ptr[i]);
        // scanf("%d",&ptr[i]);
    }
    free(ptr);
    return 0;
}


