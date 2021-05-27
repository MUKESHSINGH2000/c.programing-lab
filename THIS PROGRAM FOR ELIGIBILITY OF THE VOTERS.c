//This programing was developed by Mukesh Singh.
//Date: 27 may ,2021
#include <stdio.h>

int main() 
{
    int year;
    printf("THIS PROGRAM FOR ELIGIBTLITY OF THE VOTERS!\n");
    printf("\t\tEnter a year\t:\t\t");
    scanf("%d",&year);
    if(year>18)
{
    printf("%d You are eligible to vote:",year);
}
else if(year>=18)
{
 printf("%dYou are also eligible to vote  :",year);
}

else 
{
printf("%d You are not eligible to vote:",year);
}
printf("\n\n\n\t\tTHANKS FOR WATCHING THIS PROGRAM!");
   return 0;
}
