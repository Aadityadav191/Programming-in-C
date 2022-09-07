/* Wap a program to find if the year is leap year 
  hint(divisible by 4) */

#include<stdio.h>
#include<conio.h>
 int main()

{
	int year, leapyear;
	printf("enter the year: ");
	scanf("%d",&year);
	if (year%4==0, (year%400==0),year%100==0)
	{
		printf("year is leap yea");
	}
	else 
	{
		printf("year is not leapyear:");
	}
	return 0;
}
