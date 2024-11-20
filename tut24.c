#include<stdio.h>

int main()
{
    char input;
    
     float kmsToMiles =0.621371 ;
     float inchestofoot =0.0833333;
     float cmstoinches = 0.393701;
     float poundtokgs = 0.453592;
     float inchestometers =0.0254;
     float first,second;

     while (1)
     {
        printf("enter the input character .q to quit\n         1. kms to miles\n    2. inches to foot\n    3. cms to inches\n     4. pound to kgs\n    5. inches to meters\n ");
        scanf("%c",&input);
       
        switch (input)
        {
        case 'q':
        printf("quiting the code");
            goto end;
        
            break;

        case '1':
         printf("enter quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first*kmsToMiles;
        printf("%f kms equal to %f\n miles",first , second);
        break;

        case '2':
         printf("enter quantity in terms of first unit\n");
        scanf("%f",&first);
         second = first*inchestofoot;
         printf("%f inches equal to %f\n foot",first , second);
        break;

        case '3':
         printf("enter quantity in terms of first unit\n");
        scanf("%f",&first);
         second = first*cmstoinches;
         printf("%f cms equal to %f\n inches",first , second);
        break;

        case '4':
         printf("enter quantity in terms of first unit\n");
        scanf("%f",&first);
         second = first*poundtokgs;
         printf("%f pound equal to %f\n kgs",first , second);
        break;

        case '5':
         printf("enter quantity in terms of first unit\n");
        scanf("%f",&first);
         second = first*inchestometers;
        printf("%f inches to meters is %f\n",first ,second);
        break;

        
        
        default:
            break;
        }
     }
     



     end:
    
    return 0;
}
