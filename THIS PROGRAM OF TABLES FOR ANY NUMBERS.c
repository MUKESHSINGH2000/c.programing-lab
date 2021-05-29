//THIS PROGRAM WAS DEVELOPED BY MUKESH SINGH.
//DATE: 29 MAY,2021
#include <stdio.h>

int main() {
    int ver1;
    // Write C code here
    printf("hello user, please enter any number:\n");
    scanf("%d",&ver1);
    printf(" your enter number %d stored in ver1 variable\n",ver1);
    printf("the table of the input number %d is given bleow:\n",ver1);
    for(int i=1; i<=10; i++)
    {
     printf("%d x %d = %d \n",ver1, i, ver1*i);
    }
    
    return 0;
}
