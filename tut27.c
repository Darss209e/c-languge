#include <stdio.h>
int main()
{
    // char a= '3';
    // char* ptra = &a;
    // printf("%d\n",ptra);
    // ptra--;
    // printf("%d\n",ptra);
    // printf("%d",ptra-2);
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *arrayptr=arr;
    printf("value at position 4 of array is %d\n ", arr[4]);
    printf("the address of first element of array is %d\n", &arr[0]);
    printf("the address of first element of array is %d\n", arr);
    printf("the address of second element of array is %d\n", &arr[1]);
    printf("the address of second element of array is %d\n", arr + 1);
    printf("the address of third element of array is %d\n", &arr[2]);
    printf("the address of third element of array is %d\n", arr + 2);
    arrayptr++;
    printf("the value at address of first element of array is %d\n", *(&arr[0]));
    printf("the value at address of first element of array is %d\n", arr[0]);
    printf("the value at address of first element of array is %d\n", *(arr));
    printf("the value at address of second element of array is %d\n", *(&arr[1]));
    printf("the value at address of second element of array is %d\n", arr[1]);
    printf("the value at address of second element of array is %d\n", *(arr + 1));

    return 0;
}