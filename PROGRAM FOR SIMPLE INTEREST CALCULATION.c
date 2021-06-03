//THIS PROGRAM WAS DEVELOPED BY MUKESH SINGH.
//DATE:2 JUNE ,2021
//PROGRAM FOR SIMPLE INTEREST CALCULATION.
#include <stdio.h>

int main()
{
int amount,year;
float int_rate,simple_int;
printf("\nEnter amount,rate of interest and duration:");
scanf("%d%f%d",&amount,&int_rate,&year);
simple_int=(amount*year*int_rate)/100;

printf("\n The simple interest calculated is = Rs.%f",simple_int);
     printf("\n\n\n THANKS FOR WATCHING THIS PROGRAM!");
    
    return 0;
}
