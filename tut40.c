#include<stdio.h>

void arrayrev(int arr[])
{
    for (int i = 0; i < 7/2; i++)
    {
        // swap item arr[i] with item arr[6-i]
        int temp;
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }

}
void arrayprint(int arr[])
{

 for (int i = 0; i < 7; i++)
    {
        printf("the value of element %d is %d\n",i,arr[i]);
    }

}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("before reversing the array\n");
  arrayprint(arr);
   
    arrayrev(arr);
    printf("after reversing the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value of element %d is %d\n",i,arr[i]);
    }
    



    return 0;
}