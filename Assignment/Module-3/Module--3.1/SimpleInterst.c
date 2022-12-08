
 // WAP to calculate simple interest
 

#include <stdio.h>

void main()
{
    float principle, time, rate,I;

   
    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate of interst: ");
    scanf("%f", &rate);

  
    I = (principle * time * rate) / 100;

   
    printf("Simple Interest = %f", I);

}
