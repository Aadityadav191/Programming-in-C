#include<stdio.h>
#include<conio.h>
struct student
  {
    char name[30];
    int roll;
    char adress[30];
  };

  int main ()
    {
        int i, num;
        struct student s;
        struct student*ptr;
        printf("Enter the number of student :");
        scanf("%d",&num);
        *ptr=s;
        for(i=0 ;i<=num-1 ;i++)
          {
            printf("Enter the name :");
            scanf("%c",(ptr+i)->name);
            printf("\n Enter the roll number :");
            scanf("%d",(ptr+i)->roll);
            printf("\n Enter the adress:");
            scanf("%c",(ptr+i)->adress);
            for(i=0; i<=num-1 ;i++);
               {
                printf("Detail of student is :");
                printf(" name=%c \n Roll number =%d \n adress=%c ", (ptr+i)->name , (ptr+i)->roll, (ptr+i)->adress);
               }
            return 0;
          }


    }
