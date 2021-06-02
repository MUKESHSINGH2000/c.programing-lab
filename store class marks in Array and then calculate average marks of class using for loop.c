//THIS PROGRAM WAS DEVELOPED BY MUKESH SINGH.
//DATE:2 JUNE ,2021
#include <stdio.h>
int main()
{
 int a[10];
 int i,j,sum=0,avg;
 printf("Enter the student marks:");
 for (int i=0; i<10; i++)
 {
 scanf("%d",&a[i]);
 }
 for(j=0;j<10;j++)
 {
     sum=sum+a[j];
 }
 avg=sum/10;
 printf("The calculated Averge marks of the class:%d",avg);
  printf("\n\n\n THANKS FOR WATCHING THIS PROGRAM!");
    return 0;
}
