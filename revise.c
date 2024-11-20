#include <stdio.h>

int main()
{
    int marks[2][4] = {{25, 2, 5, 7},
                       {2, 5, 3, 6}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d element of the array\n",i);
    //     scanf("%d",&marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            // printf(" the value of %d,%d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ",marks[i][j]);

        }
        printf("\n");
    }

    // marks[0]=34;
    // printf("marks of student 1 is %d\n",marks[0]);
    // marks[0]=454;
    // marks[1]=454;
    // marks[2]=454;
    // marks[3]=454;
    // printf("marks of student 2 is %d\n",marks[0]);
    return 0;
}
