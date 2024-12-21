#include<stdio.h>

int main()
{
    int num[2][4][6]= {{1,2,3},
                        {4,5,6},
                        {4,1,3}};


     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 4; j++)
        {
            printf("\n");
            for (int k = 0; k < 6; k++)
            {
                printf("%d",num[i][j][k]);
            }
            
        }
        
     }
     

    return 0;
}
