#include<stdio.h>
#include<conio.h>
int main ()
{
	int num,fact=1,i;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=1; i<=num  ; i++)
	   {
	   	fact=fact*i;
	   }
	printf(" factorial is %d",fact);
	getch();
	return 0;
}
