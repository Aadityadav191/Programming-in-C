#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,num, count=0;
    printf("Enter the numebr :");
    scanf("%d",&num);
    for(i=1; i<=num ; i++)
      {
        if (num%i==0)
          {
            count++;
          }
      }
    if(count==2)
      {
        printf("The number is prime numebr ...");
      }
    else
      {
        printf("The numebr is not primre numebr ..");
      }
    return 0 ;


}