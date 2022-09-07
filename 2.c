#include<stdio.h>
#include<conio.h>
struct student 
  {
    char name[30];
    int roll;
    char adress[20];
    char faculty[20];
    char college[20];
  };

int main()
   
  {
    struct student s[30];
    int i, num;
    printf("Enter the number of student :");
    scanf("%d",&num);
    printf("Enter the detail of n student :");
    for(i=0; i<=num-1; i++);
      {
        printf("Enter the name of student :");
        scanf("%s",s[i].name);
        peintf("Enter the roll number :");
        scanf("%d",&s[i].roll);
        printf("Enter the adress :");
        scanf("%s",s[i].adress);
        printf("Enter the faculty");
        scanf("%s",s[i].faculty);
        printf("Enter the college ");
        scanf("%s",s[i].college);

        printf("THe detail of the sundent is :");
        for(i=0; i<=num-1; i+1)
           {
            printf("name=%s \n roll=%d \n adress=%s \n faculty=%s \n college=%s", s[i].name , s[i].roll, s[i].adress, s[i].faculty, s[i].college);
           }
      }
    return 0;
}
