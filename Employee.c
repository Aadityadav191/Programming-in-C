
/* create a stucture called emploee having name,adress ,post, salarly, and age .
    input n number pf employee and display the information of employee whoes post is accountant  */

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
   {
    char name[30];
    char adress[30];
    char post[30];
    int salarly;
    int age;
   };

int main()
   {
    struct employee e[50];
    int i, n;
    printf("Enter the number of employee:");
    scanf("%d",&n);
    printf("Enter the full details of employee:");
    for(i=0 ;i<=n-1; i++)
       {
        printf("\nEnter the name :");
        scanf("%c",&e[i].name);
        printf("\nEnter the adress:");
        scanf("%c",&e[i].adress);
        printf("\nEnter the post:");
        scanf("%c",&e[i].post);
        printf("\nEnter the salarly:");
        scanf("%f",&e[i].salarly);
        printf("\nEnter the age :");
        scanf("%d",&e[i].age);
        
       }
    printf("Information of employee whose post is  accountant is : ");
    for (i=0; i<=n-1 ;i++)
       {
        if (strcmp(e[i].post,"Accountant")==0)
          {
            printf("name=%c \t adress=%c \t post=%c \n salarly=%f \n age=%d ", e[i].name , e[i].adress , e[i].post , e[i].salarly , e[i].age);
          }
       }
    return 0;
    


   }