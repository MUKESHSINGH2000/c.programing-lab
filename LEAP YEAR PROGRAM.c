//This programing was developed by Mukesh Singh.
//Date: 27 may ,2021
#include <stdio.h>

int main() 
{
    int year;
    printf("THIS PROGRAM IS A LEAP YEAR PROGRAM\n");
    printf("Enter a year");
    scanf("%d",&year);
    if(year%400==0)
{
    printf("%d is the leap year",year);
}
else if(year%100==0)
{
 printf("%d is not a leap year:,year");
}
else if(year%4==0)
{
 printf("%d is a leap year:",year);
}
else 
{
printf("%d is not leap yaer:",year);
}
printf("\n\n\nTHANKS FOR WATCHING THIS PROGRAM!");
   return 0;
}
