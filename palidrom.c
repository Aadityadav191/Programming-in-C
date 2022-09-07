#include<stdio.h>
#include<conio.h>
int main()
{
    int num,r,s=0,x;
    printf("Enter the number :");
    scanf("%d",&num);
    x=num;
    while(num!=0)
      {
        r=num%10;
        s=s*10+r;
        num=num/10;
      }
    if(x==s)
      {
        printf("The numer is pallidrom :");
      }
    else
    printf("Not pallidrom");
    return 0;
    


}