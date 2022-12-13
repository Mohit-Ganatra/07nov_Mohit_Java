// WAP to convert years into days and days into years.

#include<stdio.h>

int main()
{
	int year,days;
	
	printf("Enter no. of years = ");
	scanf("%d",&year);
	
	days=year*365;
	
	printf(" %d Year = %d days",year,days);
	
	return 0;
}
