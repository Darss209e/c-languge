#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char computerchoice,playerchoice;
    int randomnumber;

    srand(time(0));

    printf("welcome to the game!!\n");
    printf("enter your choice\n");
    printf("'r' for rock\n 'p'for paper\n 's'for scissor\n" );
    printf("your choice is \n");
    scanf("%c",&playerchoice);



    randomnumber = rand() %3;
    if (randomnumber==0 )
    {
        computerchoice='r';
    }
    else if (randomnumber==1)
    {
        computerchoice='p';
    }
    else
    {
        computerchoice='s';
    }
    
    printf("computer chose:");
    if (computerchoice=='r')
    {
        printf("rock\n");
    }
    else if (computerchoice=='p')
    {
        printf("paper\n");

    }
    else
    {
        printf("scissor\n");
    }
    
    if (playerchoice==computerchoice)
    {
        printf("its a tie\n");
    }
    else if ((playerchoice == 'r' && computerchoice == 's') ||
               (playerchoice == 'p' && computerchoice == 'r') ||
               (playerchoice == 's' && computerchoice == 'p')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }





    return 0;
}

