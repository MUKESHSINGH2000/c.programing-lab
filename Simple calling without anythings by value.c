//This program was developed by Mukesh Singh.
//Date:14 JULY ,2021.
//Pointer secondary data type.
//Simple calling without anythings by value.
#include <stdio.h>
void placement();
int main() 
{
    printf("Hello students, total placement of campus are:\n");
    placement();
    return 0;
}

void placement()
{
    char a;
    printf("Enter your Campus: P for PIET and C for PCE\n");
    scanf("%c", &a);
    if(a=='P')
    {
        printf("PIET- 200\n");
    }
    else if(a=='C')
    {
        printf("PCE- 300");
    }
    else
    {
        printf("Wrong input");
    }
}
