#include<stdio.h>
#include<conio.h>
int n,r, s=0;      ///globle veriable 
int main()
 {
    printf("Enter the numebr");
    scanf("%d",&n);
    while(n!=0)
      {
        r=n%10;
        s=10*s+r;
        n=n/10;
      }
    printf("The reverse number is %d",s);
    return 0;
 } 