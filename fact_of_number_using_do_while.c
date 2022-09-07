#include<stdio.h>
#include<conio.h>
int main()
{
	int  num, fact=1 ,i;
	printf("Enter the number :");
	scanf("%d",&num);
	do 
	{
		fact=fact*i;
		i++;
	}
	while(i<=num);
	printf("the factorial is %d",fact );
	
	getch ();
	return 0;
	
}
