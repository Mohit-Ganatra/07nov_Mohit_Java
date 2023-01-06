#include<stdio.h>
void main()
{
    int a[3][3],b[3][3];
    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nEnter the value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\nEnter the value of b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n-----------matrix - 1------------\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n-----------matrix - 2------------\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n-----------addition of matrix ------------\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
     printf("\n-----------Subtraction of matrix ------------\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
     printf("\n-----------Multiplication of matrix ------------\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]*b[i][j]);
        }
        printf("\n");
    }
     printf("\n-----------Divition of matrix ------------\n");
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]/b[i][j]);
        }
        printf("\n");
    }
}
