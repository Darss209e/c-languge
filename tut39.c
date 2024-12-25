#include<stdio.h>
#include<string.h>

union student
{
    int id;
    int marks;
    char fav_character;
    char name[34];
    
};

int main()
{
    union student s1;
    s1.id=1;
    strcpy(s1.name,"darsh");
    s1.fav_character='u';
    s1.marks=45;
    
    printf("the id is %d\n",s1.id);
    printf("the marks is %d\n",s1.marks);
    printf("the fav_character is %c\n",s1.fav_character);
    printf("the name is %s\n",s1.name);
    return 0;
}