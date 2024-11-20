#include <stdio.h>

int main()
{
    int marks[2][4] = {{2,5,8,9},{3,6,0,1}};
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d element of the array\n",i);
    //     scanf("%d",&marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf(" The value of %d,%d element of the array is %d\n", i,j, marks[i][j]);
               printf("%d",marks[i][j]);

        }
        printf("\n");

    }

    // marks[0]=34;
    // printf("marks of student 1 is %d\n",marks[0]);
    // marks[0]=454;
    // marks[1]=54;
    // marks[2]=4;
    // marks[3]=44;
    // printf("marks of student 1 is %d\n",marks[0]);
    return 0;
}
