#include <stdio.h>

int func1(int array[])
{
  for (int i = 0; i < 4; i++)
  {
    printf("the value of %d is %d\n", i, array[i]);
  }
  //  array[0]=345; very important point if you chaange any value here its get reflected in main()

  return 0;
}
void func2(int *ptr)
{
  for (int i = 0; i < 4; i++)
  {
    printf("the value of %d is %d\n", i, *(ptr + i));
  }
  *(ptr + 2) = 3456;
}
void func3(int arr[2][2])
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("the value of %d,%d is %d\n", i, j, arr[i][j]);
    }
  }
}

int main()
{
  int arr[][2] = {{
                      5,
                      15,
                  },
                  {10, 3}};
  // printf("the value at index 0 is %d\n", arr[0]);
  // func1(arr);
  // printf("the value at index 0 is %d\n", arr[0]);
  // func2(arr);
  // func2(arr);
  func3(arr);
  return 0;
}