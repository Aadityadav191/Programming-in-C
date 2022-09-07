 // Given number is odd or even using conditional operator 

#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	if (a%2==0)
	  {
	   printf("a is even number");	
	  }
	else 
	 printf("a is odd number ");
	 
	 getch();
	 return 0;
	 
}
