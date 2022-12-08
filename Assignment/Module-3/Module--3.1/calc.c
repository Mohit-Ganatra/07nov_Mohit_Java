/* Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo)*/

#include<stdio.h>

void main()
{
	int a,b;

	printf("Enter value of A = ");
	scanf("%d",&a);
	
	printf("Enter value of B = ");
	scanf("%d",&b);
	
	printf("A + B = %d \n",a+b);
	printf("A - B = %d \n",a-b);
	printf("A * B = %d \n",a*b);
	printf("A / B = %d \n",a/b);
	printf("A % B = %d \n",a%b);
}

