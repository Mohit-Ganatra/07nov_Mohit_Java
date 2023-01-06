// WAP to print table up to given numbers.

#include<stdio.h>

int main()
{
	int i,no,ans;
	i=1;
	printf("Enter no. = ");
	scanf("%d",&no);
	
	printf("Table of given no. %d \n",no); 
	for(i=1; i<=10; ++i)
	{
		ans=no*i;
		printf(" %d * %d = %d \n",no,i,ans);
	}
}
