#include<stdio.h>
#include<conio.h>
struct student 
{
 char name[20];
 int age;
 float percentage;
 char adress[30];
};
int main()
  {

    struct student s;
    printf("\n\nEnter the full detail of student :\n\n");
    printf("Enter the name :");
    scanf("%c",&s.name );
    printf("\nEnter the age :");
    scanf("%d",&s.age);
    printf("\nEnter the percentage :");
    scanf("%f",&s.percentage);
    printf("\nEnter the adraess :");
    scanf("%c",&s.adress);
    printf("name=%c \n age=%d \n percentage=%f \n adress=%c ",s.name ,s.age, s.percentage ,s.adress);
    return 0;

  }