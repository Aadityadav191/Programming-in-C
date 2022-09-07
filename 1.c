#include<stdio.h>
#include<conio.h>
struct student 
   {
    char name [50];
    int roll_no;
    char faculty[50];
    char adress[50];
   };

int main()
  {

    struct student s;
    printf("\n Enter the details of student:\n\n");
    printf("Enter the name :");
    scanf("%c",&s.name);
    printf("Enter the roll number ");
    scanf("%d",&s.roll_no);
    printf("Enter the faculty :");
    scanf("%c",&s.faculty );
    printf("The details of student is :");
    printf("\nname=%c \n roll_no=%d \n faculty=%c \n adrress=%c \n ",s.name,  s.roll_no, s.faculty , s.adress);
    return 0;

  }
 