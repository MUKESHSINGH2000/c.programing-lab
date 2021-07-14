//This program was developed by Mukesh Singh.
//Date:14 JULY ,2021.
//Pointer secondary data type.
//Call by value.
#include <stdio.h>
void placement(char a);
int main() 
{   char q;
    printf("Hello students, total placement of campus are:\n");
    printf("Enter your Campus: P for PIET and C for PCE\n");
    scanf("%c", &q);
    placement(q); //call by value 
    
    return 0;
}

void placement(char a)
{
    if(a=='P')
    {printf("PIET- 200\n");
    }
    else if(a=='C')
    {printf("PCE- 300");
    }
    else
    {printf("Wrong input");
    }
}
