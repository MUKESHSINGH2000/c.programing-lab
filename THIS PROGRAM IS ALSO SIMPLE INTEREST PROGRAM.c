//THIS PROGRAM WAS DEVELOPED BY MUKESH SINGH.
//DATE:2 JUNE ,2021
//PROGRAM FOR SIMPLE INTEREST CALCULATION.
#include <stdio.h>
#include <math.h>

int main()
{
float p,r,y,I,a;
printf("\nEnter the princilpal amount(p):");
scanf("%f",&p);

printf("\nEnter the interest rate (r):");
scanf("%f",&r);
printf("\nEnter number of years(y):");
scanf("%f",&y);
I = r/100;
a = p*pow((1+I),y);
//writing output.
printf("\n The final amount after interest = Rs.%f",a);
     printf("\n\n\n THANKS FOR WATCHING THIS PROGRAM!");
    
    return 0;
}
