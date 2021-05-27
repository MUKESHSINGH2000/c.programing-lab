//This programing was developed by Mukesh Singh.
//Date: 27 may ,2021
#include <stdio.h>

int main() 
{
    int year;
    printf("THIS PROGRAM FOR THE DRIVING LICENSE\n");
    printf("Enter a year\t:\t\t");
    scanf("%d",&year);
    if(year>18)
{
    printf("%d You can allow to driving:",year);
}
else if(year>=18)
{
 printf("%dYou are also allowed to driving  :",year);
}

else 
{
printf("%d You are not allowed to driving:",year);
}
printf("\n\n\nTHANKS FOR WATCHING THIS PROGRAM!");
   return 0;
}
