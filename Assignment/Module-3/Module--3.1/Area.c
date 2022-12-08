/* WAP to find Area of circle , reactangle, tiangle*/ 

#include<stdio.h>

    void main()
    {
	     const pi = 3.14;
	     int r;
       int l;
	     int w;
       int b;
	     int h;
	     float area;
	     float area1;
       float area3;
	
	     printf("enter the value of radius : ");
	     scanf("%d",&r);
       
       printf("enter the value of length : ");
	     scanf("\n %d",&l);
	
	     printf("enter the value of width : ");
	     scanf("\n %d",&w);
       
       printf("enter the value of base : ");
	     scanf("\n%d",&b);
	
	     printf("enter the value of height : ");
	     scanf("\n%d",&h);
	
	     area = pi *r*r;
	     printf("\n area of circle is : %f",area);
       
       area1 = l*w;
	     printf("\n area of rectengle is : %f",area1);
       
       area3 = 0.5*b*h;
	     printf("\n area of tringle is : %f",area3);
       
     }	
