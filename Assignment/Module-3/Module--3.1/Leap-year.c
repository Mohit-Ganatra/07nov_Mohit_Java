// WAP to check if the given year is a leap year or not.

#include <stdio.h>

void main() 
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   
   if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }
}
