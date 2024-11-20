#include<stdio.h>

int main(int argc, char const *argv[])
{

    int a;
    printf("enter the number you want multiplicatipon table of\n");
    scanf("%d",&a);
    printf("the multiplication table of %d is as follows\n",a);
    // printf("%dx1=%d\n",a,a*1);
    // printf("%dx2=%d\n",a,a*2);
    // printf("%dx3=%d\n",a,a*3);
    // printf("%dx4=%d\n",a,a*4);
    // printf("%dx5=%d\n",a,a*5);
    // printf("%dx6=%d\n",a,a*6);
    // printf("%dx7=%d\n",a,a*7);
    // printf("%dx8=%d\n",a,a*8);
    // printf("%dx9=%d\n",a,a*9);
    // printf("%dx10=%d\n",a,a*10);

    for (int i = 0; i <= 10; i++)
    {
        printf("%dx%d=%d\n",a,i,a*i);
    }
    
    return 0;
}
