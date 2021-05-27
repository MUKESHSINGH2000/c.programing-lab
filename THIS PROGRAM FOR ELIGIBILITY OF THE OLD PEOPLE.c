//This programing was developed by Mukesh Singh.
//Date: 27 may ,2021
#include <stdio.h>

int main() 
{
    int year;
    printf("THIS PROGRAM FOR ELIGIBILITY OF THE OLD PEOPLE!\n");
    printf("\t\tEnter a year\t:\t\t");
    scanf("%d",&year);
    if(year>75)
{
    printf("%d You are eligible for pension:",year);
}
else if(year>=75)
{
 printf("%dYou are also  eligible for pension  :",year);
}

else 
{
printf("%d You are not eligible for pension:",year);
}
printf("\n\n\n\t\tTHANKS FOR WATCHING THIS PROGRAM!");
   return 0;
}
