#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char favcharacter;
    char name[34];
};
struct student darsh,harry, ravi;
void  print()
{

    printf("%s",darsh.name);
}


int main()
{
    // struct student darsh,harry, ravi;
    darsh.id=1;
    harry.id=2;
    ravi.id=3;
    harry.marks=25;
    darsh.marks=25;
    ravi.marks=25;
    ravi.favcharacter='p';
    darsh.favcharacter='y';
    harry.favcharacter='q';
    strcpy(darsh.name, "darshan student of the year");
    strcpy(harry.name, "harry singh");
    print();
    // printf("darsh got %d marks\n",darsh.marks);
    // printf("darshan name is  %s\n ",darsh.name);
    // printf("harry got %d marks\n",harry.marks);
    // printf("harry name is  %s ",harry.name);

    
    return 0;
}