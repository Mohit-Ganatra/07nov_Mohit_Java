#include<stdio.h>
void main()
{
	int i,odd=0,even=0, n[10],osum=0,esum=0;
		
	for( i=0; i<10; i++)
	{
	printf("Enter number: ");
	scanf("%d",&n[i]);
	

		if(n[i]%2==0) 
		{
			even++;
			esum += n[i];	
		}
		else
		{
			odd++;
			osum += n[i];
		}
		
	}
	printf("\n------------------------\n");
	printf("No of even is %d\n",even);
	printf("No of odd is %d\n",odd);
	printf("sum of even is %d\n",esum);
	printf("sum of odd is %d\n",osum);
}
