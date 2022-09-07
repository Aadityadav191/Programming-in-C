



// to check the greatest of three given number 
 
#include<stdio.h>
#include<conio.h>
 int main ()
  {
  	int A, B, C ;
  	printf(" Enter the number A: B: C:  ");
  	scanf("%d%d%d",&A,&B,&C );
  	if (A>B && A>C )
    {
    	printf("A is greater number ");
	}
	else if (B>C && B>A)
	{
		printf(" B is greater number ");
	}
	else if (C>A && C>B)
	{
	printf(" C is greater number ");
	}
	else 
	printf(" the number is same ");
	getch ();
	return 100;
  }
