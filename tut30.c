// take input from user and ask user to choose 0 for triangular star pattern and 1 for reverse triangular pattern
// then print pattern accordingly



//     #include <stdio.h>

// int main() {
//     int i, j, n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) { // Outer loop for rows
//         for (j = 1; j <= i; j++) { // Inner loop for columns
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }

//     return 0;
// }

    // #include<stdio.h>
    // int main()
    // {
    //     int i ,j,n;
    //     printf("enter the number of rows:\n");
    //     scanf("%d",&n);

    //     for (int i = 0; i <= n; i++)
    //     {
    //         for (int j = 0; j <=i; j++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
        
    //     return 0;
    // }
    #include<stdio.h>
    int main()
    {
        int i ,j,n;
        printf("enter the number of rows:\n");
        scanf("%d",&n);

        for (i=n; i >= 1; i--)
        {
            for (j=1; j>=i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
        return 0;
    }