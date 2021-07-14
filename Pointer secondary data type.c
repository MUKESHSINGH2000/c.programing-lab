//This program was developed by Mukesh Singh.
//Date:14 JULY ,2021.
//Pointer secondary data type.
#include <stdio.h>
int main()
{
   int *pc, **qc, c;
    c = 22;
    pc = &c;
    qc = &pc;
   printf("Address of c: %p\n", &c);
   printf("Address stored at pointer pc: %p\n", pc);
   
   printf("Address of pointer pc: %p\n", &pc);
   printf("Address stored at pointer qc: %p\n", qc);
   
   printf("Value stored at c:%d\n", c);
   printf("Value stored at c using pc:%d\n", *pc);
   printf("Value stored at c using qc:%d\n", **qc);
   **qc=14;
   printf("Value stored at c:%d\n", c);
   printf("Value stored at c using pc:%d\n", *pc);
   printf("Value stored at c using qc:%d\n", **qc);
   return 0;
}
