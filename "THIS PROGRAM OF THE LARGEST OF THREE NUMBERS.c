//This programing was developed by Mukesh Singh.
//Date: 27 may ,2021
#include <stdio.h>

int main() 

{
    int x,y,z;
    printf("THIS PROGRAM OF THE LARGEST OF THREE NUMBERS!\n");
    printf("\t\tENTER ANY THREE NUMBERS:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {
    if(x>z)
    printf("\nLARGEST = %d:",x);
    else
    {
   if(z>y)
   
   printf("\n LARGEST = %d:",z);

  }
  }
  else 
  {
  if(y>z)
  printf("\n LARGEST = %d:",y);
  else
  printf("\n LARGEST = %d:",z);
  }
  printf("\n\n\n\t\tTHANKS FOR WATCHING THIS PROGRAM!");
  return 0;
}
