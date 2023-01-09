#include<stdio.h>

void main()
{
    int i,j,row=5;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d", j); 
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
