// millimeter to kilometer 
// liter to kgs 
// farenhite to celcius

#include<stdio.h>

int main()
{
    char unit;
    float millimetertokilometer =1e-6;
    float litertokgs =0.529;
    float farenhitetocelcius ;
    float first,second;
while (1)
{
    printf("enter unit you want conversion of\n q to exit\n 1.millimeter to kilometer\n 2.liter to kgs\n 3.farenhite to celcius\n");
    scanf("%c",&unit);
    switch (unit)
    {
    case 'q' :
      printf("exited the code");
        goto end;
        break;
    case '1' :
      printf("enter quantity in terms of first unit\n");
      scanf("%f",&first);
      second=first*millimetertokilometer;
      printf("%f millimeters is equals to %f kilometers\n",first,second);
        
        break;
    case '2' :
      printf("enter quantity in terms of first unit\n");
        scanf("%f",&first);
         second=first*litertokgs;
      printf("%f liter is equals to %f kgs\n",first,second);
        break;
    case '3' :
     printf("enter quantity in terms of first unit\n");
        scanf("%f",&first);
        second=(first-32)*5/9;
        printf("%f farenhites is equals to %f celcius\n",first,second);
        break;
       
    



    default:
        break;
    }
}
  end:
    return 0;
}
