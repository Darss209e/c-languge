// example of call by refrence
// #include<stdio.h>

//  void swap(int*x,int*y){

//  int temp;
//  temp=*x;
//  *x=*y;
//  *y=temp;
// return;
//  }

// int main()
// {
//     int a=10,b=25;
//     printf("%d and %d\n",a,b);
//     swap(&a,&b);
//     printf("%d and %d\n",a,b);
//     return 0;
// }


#include<stdio.h>
void changevalue(int*address)
{
  *address=345;


}
int main()
{
    int a=34,b=56;
    printf("the value of a now is %d\n",a);
    changevalue(&a);
    printf("the value of a now is %d\n",a);
    return 0;
}

// quick quiz : given two numbers a nad b add them then subtract them and assign them to a and b;

// #include<stdio.h>
// void assign(int*x,int*y)
// {
    
//  add = *x+*y;
//  subb = *x-*y;




// }

// int main()
// {
//     int a,b;
//     printf("enter your first  numbers ");
//     scanf("%d",&a);
//     printf("enter your second number");
//     scanf("%d",b);
//     assign(&a,&b);
//     printf("addition is %d\n,subbtraction is %d\n",add,subb);
//     return 0;
// }

